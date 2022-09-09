#pragma once

#include "cEntregas.h"
#include "cJefes.h"

class cProyecto
{
private:
	//atributos descriptivos
	string Nombre;
	time_t Fecha_inicio;
	time_t Fecha_final;
	//atributos funcionales;
	static int id_max;
	const int id_act;
	string Etapa;

public:
	cProyecto(string nombre, time_t inicio, time_t final, string etapa);
	~cProyecto();
};


