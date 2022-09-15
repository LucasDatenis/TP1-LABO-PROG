#include "cJefes.h"

cJefes::cJefes(string nombre, string apellido, long int dni, string telefono, int pro_max) : DNI(dni), Nombre(nombre), Apellido(apellido), Telefono(telefono)
{
	this->disponible = true;
	this->lista_proyectos = new cListaProyectos(pro_max);
	this->lista_programadores = new cListaProgramadores(5);
}


cJefes::~cJefes()
{
	if(lista_proyectos != NULL)
		delete lista_proyectos;
}


bool cJefes::Asignar_proyecto(cProyecto* proyecto)
{
	if (disponible == true)
	{
		if (lista_proyectos->Agregar(proyecto) == true)
		{
			proyecto->setJefe(this);
			return true;
		}
		else
		{
			cout << "No se puede asignar mas proyectos a " << Nombre << " " << Apellido << endl;
			return false;
		}
	}
	else
	{
		cout << Nombre << " " << Apellido << " no esta disponble." << endl;
		return false;
	}
}

void cJefes::Asignar_Programadores(cProgramadores* programador)

{
	bool verificar = lista_programadores->Agregar(programador);
	if (verificar == true)
		cout << "Se asigno el programador" << endl;
	else
		cout << "No es posible asignar el prgramador" << endl;
}



void cJefes::Reasignar_programador(cJefes* jefes, cProgramadores* programador)
{
	int pos = lista_programadores->Buscar_id(programador->getId());
	if (pos < 0)
		cout << "El programador no esta asignado a este Jefe" << endl;
	else
	{
		lista_programadores->Agregar(programador);
	}
}

void cJefes::Cambiar_Fecha(int dia, int mes, int anio, cProyecto* proyecto)
{
	int pos = lista_proyectos->Buscar_id(proyecto->getid());
	if (pos < 0)
		cout << "No es posible cambiar la fecha del proyecto, ya que este proyecto no corresponde con este Jefe." << endl;
	else
	{
		proyecto->setDiafin(dia);
		proyecto->setMesfin(mes);
		proyecto->setAniofin(anio);
	}
}

void cJefes::Revisar_Entrega(cProyecto* proyecto)
{
	if (this == proyecto->getJefe())
	{
	}
}

void cJefes::Imprimir()
{
	cout << "Jefe: " << Apellido << ", " << Nombre << endl << endl;
	lista_proyectos->Listar();
	lista_programadores->Listar();

}