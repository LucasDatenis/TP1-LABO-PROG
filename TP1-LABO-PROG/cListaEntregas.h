#pragma once

#include "cEntregas.h"

class cListaEntregas
{
private:
	cEntregas** listas;
	int cant_max;
	int cant_act;

public:
	cListaEntregas();
	~cListaEntregas();
};
