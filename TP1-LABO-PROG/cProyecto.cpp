#include "cProyecto.h"

int cProyecto::ID_max = 0;

cProyecto::cProyecto(string nombre, Estados estado, time_t inicio, int dia_fin, int mes_fin, int anio_fin): ID(ID_max)
{
	this->Etapa = new cEntregas(ID);
	this->ID_max++;
	this->Nombre = nombre;
	this->Estado = estado;
	this->Fecha_inicio = inicio;
	this->Fecha_final.tm_mday = dia_fin;
	this->Fecha_final.tm_mon = mes_fin;
	this->Fecha_final.tm_year = anio_fin;
	//this->jefe = jefe;
}

cProyecto::~cProyecto()
{
	delete Etapa;
	//delete jefe;
}
