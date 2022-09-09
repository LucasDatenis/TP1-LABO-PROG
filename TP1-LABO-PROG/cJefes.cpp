#include "cJefes.h"

cJefes::cJefes(string nombre, string apellido, long int dni, string telefono, int pro_max) : DNI(dni), Nombre(nombre), Apellido(apellido), Telefono(telefono)
{
	this->disponible = true;
	this->lista_proyectos = new cListaProyectos(pro_max);
}


cJefes::~cJefes()
{
	delete lista_proyectos;
}


bool cJefes::Asignar_proyecto(cProyecto* proyecto)
{
	if (disponible == true)
	{
		if (lista_proyectos->Agregar(proyecto) == true)
		{
			cout << "Se agrego correcatmente el proyecto " << proyecto->getnombre() << " al jefe " << Nombre << " " << Apellido << endl;
			//proyecto->setJefe(cJefes);
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