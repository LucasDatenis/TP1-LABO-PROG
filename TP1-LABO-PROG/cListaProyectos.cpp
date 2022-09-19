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
	if (lista != NULL)
	{
		for (int i = 0; i < cant_act; i++)
			delete lista[i];
		delete[] lista;
	}
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

void cListaProyectos::Listar()
{
	for (int i = 0; i < cant_act; i++)
	{
		cout << "Proyecto nro: " << i+1 << endl;
		cout << "Nombre: " << lista[i]->getnombre() << endl;
		cout << "Fecha propuesta de Fin: " << lista[i]->getDiaFin() << "/" << lista[i]->getMesFin() << "/" << lista[i]->getAnioFin() << endl << endl;
	 }
}

void cListaProyectos::Listar_2(int anio, Estados estado)
{
	switch (estado)
	{
	case Estados::Espera:
		cout << "En espera en " << anio << endl;
		for (int i = 0; i < cant_act; i++)
		{
			if (lista[i]->getestado() == estado && lista[i]->getAnioFin() == anio)
			{
				cout << "Proyecto: " << lista[i]->getnombre() << endl;
			}
		}
	case Estados::Desarrollo:
		cout << "En desarrollo en " << anio << endl;
		for (int i = 0; i < cant_act; i++)
		{
			if (lista[i]->getestado() == estado && lista[i]->getAnioFin() == anio)
			{
				cout << "Proyecto: " << lista[i]->getnombre() << endl;
			}
		}
	case Estados::Finalizado:
		cout << "Finalizados en " << anio << endl;
		for (int i = 0; i < cant_act; i++)
		{
			if (lista[i]->getestado() == estado && lista[i]->getAnioFin() == anio)
			{
				cout << "Proyecto: " << lista[i]->getnombre() << endl;
			}
		}
	}

}

bool cListaProyectos::Agregar(cProyecto* proyecto)
{
	if (cant_act < cant_max)
	{
		int pos = Buscar_id(proyecto->getid());
		if (pos >= 0)
		{
			cout << "El proyecto no pertenece a este Jefe" << endl;
			return false;
		}
		else
		{
			lista[cant_act] = proyecto;
			cant_act++;
			return true;
		}
	}
	else
	{
		cout << "No es posible asignar mas proyectos" << endl;
		return false;
	}
}

cProyecto* cListaProyectos::Quitar(int id)
{
	int pos = Buscar_id(id);
	if (pos < 0)
		return NULL;
	else
	{
		cProyecto* aux = lista[pos];
		for (int i = pos; i < cant_act - 1; i++)
		{
			lista[i] = lista[i + 1];
		}
		cant_act--;
		lista[cant_act] = NULL;
		return aux;
	}
}

void cListaProyectos::Quitar_Completo()
{
	for (int i = 0; i < cant_act; i++)
	{
		lista[i] = NULL;
	}
}