#include "cListaEntregas.h"

cListaEntregas::cListaEntregas()
{
	this->lista = new cEntregas * [MAX];
	for (int i = 0; i < MAX; i++)
		lista[i] = NULL;
	this->cant_act = 0;
	this->cant_max = MAX;
}

cListaEntregas::~cListaEntregas()
{
	if (lista != NULL)
		delete[] lista;
}
