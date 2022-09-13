#include "cListaProyectos.h"

cListaProyectos::cListaProyectos(int tam)
{
	this->cant_act = 0;
	this->cant_max = tam;
	this->lista = new cProyecto * [tam];
	for (int i = 0; i < cant_max; i++)
		lista[i] = NULL;
}

cListaProyectos::~cListaProyectos()
{
	if(lista != NULL)
		delete[] lista;
}

int cListaProyectos::Buscar_id(int id)
{
	for (int i = 0; i < cant_act; i++)
	{
		if (lista[i]->getid() == id)
			return i;
	}
	return -1;
}

bool cListaProyectos::Agregar(cProyecto* proyecto)
{
	if (cant_act == cant_max)
		return false;
	else
	{
		int pos = Buscar_id(proyecto->getid());
		if (pos >= 0)
			return false;
		else
		{
			lista[cant_act] = proyecto;
			cant_act++;
			return true;
		}
	}
}

//cProyecto* cListaProyectos::Quitar(int id)
//{
//	int pos = Buscar_id(id);
//	if (pos > 0)
//		return NULL;
//	else
//	{
//		cProyecto* aux = listaPro[pos];
//		for (int i = pos; i < cant_act - 1; i++)
//		{
//			listaPro[i] = listaPro[i + 1];
//		}
//		cant_act--;
//		listaPro[cant_act] = NULL;
//		return aux;
//	}
//}
