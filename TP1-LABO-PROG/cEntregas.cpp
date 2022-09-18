#include "cEntregas.h"
#include "cJefes.h"

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

void cEntregas::Actualizar(cJefes* jefe, int dia, int mes, int anio)
{
	if (aceptada == true)
	{
		this->Fecha_Entrega.tm_year = anio;
		this->Fecha_Entrega.tm_mon = mes;
		this->Fecha_Entrega.tm_mday = dia;
		cout << "El proyecto se ha finalizado" << endl;
	}
	else
		cout << "Se solicita una reentrega del proyecto, al jefe " << jefe->getApellido() << " " << jefe->getNombre();
	
}