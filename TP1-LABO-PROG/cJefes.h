#pragma once

#include "Header.h"
#include "cProyecto.h"

class cJefes
{
private:
	const string Nombre;
	const string Apellido;
	const long int DNI;
	const string Telefono;
	bool disponible;
	int proyecto_max;
	int proyecto_act;
	cProyecto* proyecto;


public:
	cJefes(string nombre, string apellido, long int dni, string telefono, bool disp, int pro_max);
	~cJefes();

	bool Asignar_proyecto(cProyecto* poyecto);

};

