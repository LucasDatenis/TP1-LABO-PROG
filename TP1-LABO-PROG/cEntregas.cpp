#include "cEntregas.h"

cEntregas::cEntregas(int id): id_act(id)
{
	this->nro_entregas = 0;
	this->Fecha_Entrega = NULL;
	this->aceptada = false;
}

cEntregas::~cEntregas()
{
}