#pragma once

#include "Enums.h"
#include "cEntregas.h"
//#include "cJefes.h"

class cProyecto
{
private:
	//atributos descriptivos
#pragma once
	string Nombre;
	time_t Fecha_inicio;
	tm Fecha_final;
	const int ID;
	static int ID_max;
	//atributos funcionales;
#pragma once
	cEntregas*  Etapa;
	Estados Estado;
	//cJefes* jefe;

public:
#pragma once
	cProyecto(string nombre, Estados estado, time_t inicio, int dia_fin, int mes_fin, int anio_fin);
	~cProyecto();
#pragma once
	string getnombre() { return this->Nombre; }
	Estados getestado() { return this->Estado; }
	const int getid() { return this->ID; }
	cEntregas* getentregas() { return this->Etapa; }
	//cJefes* getJefe() { return this->jefe; }
#pragma once
	//void setJefe(cJefes* jefe) { this->jefe = jefe; }
};