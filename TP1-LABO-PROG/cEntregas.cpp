#include "cEntregas.h"
#include "cJefes.h"

cEntregas::cEntregas(): id_act()
{
	this->nro_entregas = 0;
	this->aceptada = false;
	this->Fecha_Entrega.tm_year = 1900;
	this->Fecha_Entrega.tm_mon = 1;
	this->Fecha_Entrega.tm_mday = 1;
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
		cout << "Se solicita una reentrega del proyecto, al jefe " << jefe->getApellido() << " " << jefe->getNombre() << endl;
	
}