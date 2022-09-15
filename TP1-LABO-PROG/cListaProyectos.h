#pragma once

#include "cProyecto.h"

class cListaProyectos
{
private:
	int cant_max;
	int cant_act;
	cProyecto** lista;

public:
	cListaProyectos(int tam);
	~cListaProyectos();

	bool Agregar(cProyecto* proyec);
	/*cProyecto* Quitar(int id);
	void Eliminar(int id);
	int Buscar_proyecto(cProyecto* proyecto);*/
	int Buscar_id(int id);

	void Listar();

};

