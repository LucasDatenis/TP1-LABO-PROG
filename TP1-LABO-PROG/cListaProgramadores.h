#pragma once

#include "cProgramadres.h"

class cListaProgramadores
{
private:
	int cant_act;
	int cant_max;
	cProgramadores** Array;
public:
	cListaProgramadores(int);
	~cListaProgramadores();

	bool Agregar(cProgramadores* programador);
	int Buscar_id(int id);
	cProgramadores* Quitar(cProgramadores* programador);
	void Listar();
};

