#pragma once

#include "Header.h"

class cEntregas
{
private:
	int nro_entregas;
	tm Fecha_Entrega;
	bool aceptada;
	const int id_act;

public:
	friend class cProyecto;
	cEntregas(int, int, int);
	~cEntregas();

	const int getid() { return this->id_act; }
	int getNroEntregas() { return this->nro_entregas; }

	void setNroentrega(int nro) { this->nro_entregas = nro; }

};