#pragma once

#include "Header.h"

class cJefes;

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

	void Actualizar(cJefes* jefe, int dia, int mes, int anio);

	const int getid() { return this->id_act; }
	int getNroEntregas() { return this->nro_entregas; }

	void setNroentrega(int nro) { this->nro_entregas = nro; }
	void setDiaEntrega(int dia) { this->Fecha_Entrega.tm_mday = dia; }
	void setMesEntrega(int mes) { this->Fecha_Entrega.tm_mon = mes; }
	void setAnioEntrega(int anio) { this->Fecha_Entrega.tm_year = anio; }

};