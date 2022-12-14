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
	cProyecto* Quitar(int id);
	void Quitar_Completo();
	int Buscar_id(int id);

	void Listar();
	void Listar_2(int, Estados);

	int getCantActual() { return this->cant_act; }

};

