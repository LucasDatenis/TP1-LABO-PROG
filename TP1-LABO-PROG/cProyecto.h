#pragma once

#include "Enums.h"
#include "cListaEntregas.h"

class cJefes;

class cProyecto
{
private:
	//atributos descriptivos
#pragma once
	const string Nombre;
	tm Fecha_inicio;
	tm Fecha_final;
	const int ID;
	static int ID_max;
	//atributos funcionales;
#pragma once
	//cListaEntregas* lista_entregas;
	Estados Estado;
	cJefes* jefe;

public:
#pragma once
	cProyecto(string nombre, Estados estado, int dia_inicio, int mes_inicio, int anio_inicio, int dia_fin, int mes_fin, int anio_fin);
	~cProyecto();
#pragma once
	string getnombre() { return this->Nombre; }
	Estados getestado() { return this->Estado; }
	const int getid() { return this->ID; }
	cJefes* getJefe() { return this->jefe; }
#pragma once
	void setJefe(cJefes* jefe) { this->jefe = jefe; }
};