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
	{
		programador->setJefe(this);
		cout << "Se asigno el programador" << endl;
	}
	else
		cout << "No es posible asignar el prgramador" << endl;
}




void cJefes::Reasignar_programador(cJefes* jefe, cProgramadores* programador)
{
	int pos = lista_programadores->Buscar_id(programador->getId());
	if (pos < 0)
		cout << "El programador no esta asignado a este Jefe" << endl;
	else
	{
		cProgramadores* aux = lista_programadores->Quitar(programador);
		jefe->lista_programadores->Agregar(programador);
		delete aux;
	}
}

cJefes* cJefes::Fin_de_Proyecto(cProyecto* proyecto)
{
	if (lista_proyectos->Buscar_id(proyecto->getid()) >= 0)
	{
		if (proyecto->getestado() == Estados::Finalizado)
		{
			cJefes* aux;
			aux = proyecto->getJefe();
			proyecto->setJefe(NULL);
			return aux;
		}
		else
			return NULL;
	}
	else
		return NULL;
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

void cJefes::Revisar_Entrega(cProyecto* proyecto, cEntregas* entrega, Estados estado)
{
	
	bool verificojefe = Asignar_proyecto(proyecto);
		if (verificojefe == false) {
			cout << "Hubo un error con el jefe" << endl;
			return;
		}
		else {
			proyecto->Recibir_entrega(entrega);
			proyecto->setestado(estado);
			int numrandom = rand() % 2 + 1;//numero random para la probabilidad del 50%
			if (proyecto->getestado() == Estados::Finalizado && numrandom == 1) {
				proyecto->Recibir_entrega(entrega);//segunda entrega
			}
			else {
				cout << "La entrega no fue aceptada" << endl;
				return;
			}
			
		}
}

void cJefes::Imprimir()
{
	cout << "Jefe: " << Apellido << ", " << Nombre << endl << endl;
	lista_proyectos->Listar();
	lista_programadores->Listar();

}