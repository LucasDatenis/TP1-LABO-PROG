#include "cEntregas.h"

cEntregas::cEntregas(int dia, int mes, int anio): id_act()
{
	this->nro_entregas = 0;
	this->Fecha_Entrega.tm_year = anio;
	this->Fecha_Entrega.tm_mon = mes;
	this->Fecha_Entrega.tm_mday = dia;
	this->aceptada = false;
}

cEntregas::~cEntregas()
{
}