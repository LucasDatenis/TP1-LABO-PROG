#pragma once

#include "cEntregas.h"

#define MAX 100

class cListaEntregas
{
private:
	int cant_max;
	int cant_act;
	cEntregas** lista;

public:
	cListaEntregas();
	~cListaEntregas();
};

