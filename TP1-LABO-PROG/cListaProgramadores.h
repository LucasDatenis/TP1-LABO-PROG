#pragma once

#include "cProgramadres.h"

class cListaProgramadores
{
private:
	int cant_act;
	cProgramadores** array;
public:
	cListaProgramadores();
	~cListaProgramadores();

	void Agregar(cProgramadores* programador);
	int Buscar(cProgramadores* programador);
};

