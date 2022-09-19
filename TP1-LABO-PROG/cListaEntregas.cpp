#include "cListaEntregas.h"

cListaEntregas::cListaEntregas()
{
	this->cant_act = 0;
	this->cant_max = MAX;
	this->lista = new cEntregas * [MAX];
	for (int i = 0; i < MAX; i++)
		lista[i] = NULL;
}

cListaEntregas::~cListaEntregas()
{
	if (lista != NULL)
		delete[] lista;
}

bool cListaEntregas::Agregar(cEntregas* entrega)
{
	if (cant_act >= cant_max)
	{
		cout << "Se llego al limite de entregas" << endl;
		return false;
	}
	else
	{
		lista[cant_act] = entrega;
		entrega->setNroentrega(cant_act);
		cant_act++;
		return true;
	}
}
