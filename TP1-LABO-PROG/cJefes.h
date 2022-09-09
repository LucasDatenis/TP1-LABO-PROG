#pragma once

#include "Header.h"
#include "cListaProyectos.h"

class cJefes
{
private:
	const string Nombre;
	const string Apellido;
	const long int DNI;
	const string Telefono;
	bool disponible;
	cListaProyectos* lista_proyectos;


public:
	cJefes(string nombre, string apellido, long int dni, string telefono, int pro_max);
	~cJefes();

	bool Asignar_proyecto(cProyecto* poyecto);

};