#include "cListaProgramadores.h"

cListaProgramadores::cListaProgramadores()
{
	this->cant_act = 0;
	this->array = new cProgramadores * [3];
	for (int i = 0; i < 3; i++)
		this->array[i] = NULL;
}

cListaProgramadores::~cListaProgramadores()
{
	if(array != NULL)
		delete[] array;
}

void cListaProgramadores::Agregar(cProgramadores* programador)
{
	if (cant_act >= 3)
		cout << "No se puede agregar otro programador" << endl;
	else
	{
		int pos = Buscar(programador);
		if (pos < 0) {
			array[cant_act] = programador;
			cant_act++;
		}
		else
			cout << "El programador ya a sido asignado" << endl;
	}
}

int cListaProgramadores::Buscar(cProgramadores* programador) {
	int pos = -1;
	for (int i = 0; i < cant_act; i++)
	{
		if (array[i] == programador)
			return i;
	}
	return -1;
}