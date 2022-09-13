#pragma once

#include "Header.h"

class cEntregas
{
private:
	int nro_entregas;
	time_t Fecha_Entrega;
	bool aceptada;
	const int id_act;

public:
	friend class cProyecto;
	cEntregas();
	~cEntregas();

	const int getid() { return this->id_act; }
	int getNroEntregas() { return this->nro_entregas; }

};