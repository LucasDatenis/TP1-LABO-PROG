#include "cProgramadores.h"
#include "cJefes.h"

int cProgramadores::id_max = 1;

cProgramadores::cProgramadores(string nombre, string apellido, int dia, int mes, int anio, string telefono, bool horario, int Tam): id(id_max), Nombre(nombre), Apellido(apellido), Telefono(telefono)
{
	this->id_max++;
	this->Fecha_nac.tm_year = anio;
	this->Fecha_nac.tm_mon = mes;
	this->Fecha_nac.tm_mday = dia;
	this->Horario = horario;
	this->Disponible = true;
	this->jefe = NULL;
	this->Array = new cListaProyectos(Tam);
}

cProgramadores::~cProgramadores()
{
	if (Array != NULL)
		delete Array;
}

cProyecto* cProgramadores::Fin_Proyecto(cProyecto* proyecto)
{
	if (Array->Buscar_id(proyecto->getid()) >= 0)
	{
		if (proyecto->getestado() == Estados::Finalizado)
		{
			cProyecto* aux;
			aux = Array->Quitar(proyecto->getid());
			
			return aux;
		}
		else
			return NULL;
	}
	else
		return NULL;
}

void cProgramadores::Entregar_Proyecto(cEntregas* entrega, cProyecto* proyecto, Estados estado, int dia, int mes, int anio)
{
	bool revisar =	jefe->Revisar_Entrega(proyecto, entrega, estado);
	if (revisar != true)
		return;
	else
	{
		entrega->Actualizar(this->jefe, dia, mes, anio);
		cProyecto* aux = Array->Quitar(proyecto->getid());
	}

}

void cProgramadores::Recibir_Proyecto(cProyecto* proyecto)
{
	int pos = this->jefe->getListaProyectos()->Buscar_id(proyecto->getid());
	if (pos < 0)
		cout << "El proyecto no corresponde con el Jefe del programador" << endl;
	else
	{
		if (Disponible == true)
		{
			this->Disponible = Array->Agregar(proyecto);
			if (Disponible != true)
			{
				cout << "El programador no esta disponible" << endl;
				return;
			}
			else
				return;
		}
	}

}
