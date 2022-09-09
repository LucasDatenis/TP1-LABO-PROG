#include "cJefes.h"

cJefes::cJefes(string nombre, string apellido, long int dni, string telefono, bool disp, int pro_max) : DNI(dni), Nombre(nombre), Apellido(apellido), Telefono(telefono)
{
	this->disponible = disp;
	this->proyecto_max = pro_max;
	this->proyecto_act = 0;
	this->proyecto = NULL;
}

cJefes::~cJefes()
{

}


bool cJefes::Asignar_proyecto(cProyecto* proyecto)
{
	this->proyecto = proyecto;
}