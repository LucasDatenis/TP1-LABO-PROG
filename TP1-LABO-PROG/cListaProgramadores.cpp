#include "cListaProgramadores.h"

cListaProgramadores::cListaProgramadores(int tam)
{
	this->cant_act = 0;
	this->cant_max = tam;
	this->Array= new cProgramadores * [tam];
	for (int i = 0; i < cant_max; i++)
		Array[i] = NULL;
}

cListaProgramadores::~cListaProgramadores()
{
	if(Array != NULL)
		delete[] Array;
}


void cListaProgramadores::Listar()
{
	for (int i = 0; i < cant_act; i++)
	{
		cout << "Programador nro: "<< i+1 << endl;
		cout << Array[i]->getApellido() << ", " << Array[i]->getNombre() << endl;
		cout << endl;
	}
}

int cListaProgramadores::Buscar_id(int id)
{
	for (int i = 0; i < cant_act; i++)
	{
		if (Array[i]->getId() == id)
			return i;
	}
	return -1;
}

bool cListaProgramadores::Agregar(cProgramadores* programador)
{
	if (cant_act == cant_max)
	{
		cout << "No es posible asignar mas proyectos" << endl;
		return false;
	}
	else
	{
		int pos = Buscar_id(programador->getId());
		if (pos >= 0)
		{
			cout << "El proyecto no pertenece a este Jefe" << endl;
			return false;
		}
		else
		{
			Array[cant_act] = programador;
			cant_act++;
			return true;
		}
	}
}