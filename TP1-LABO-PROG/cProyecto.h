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
	cListaEntregas* lista_entregas;
	Estados Estado;
	cJefes* jefe;
	int cant_entregas;

public:
#pragma once
	cProyecto(string nombre, Estados estado, int dia_inicio, int mes_inicio, int anio_inicio, int dia_fin, int mes_fin, int anio_fin);
	~cProyecto();
#pragma once 
	void Recibir_entrega(cEntregas* entrega);
#pragma once
	string getnombre() { return this->Nombre; }
	Estados getestado() { return this->Estado; }
	const int getid() { return this->ID; }
	cJefes* getJefe() { return this->jefe; }
	int getDiaFin() { return this->Fecha_final.tm_mday; }
	int getMesFin() { return this->Fecha_final.tm_mon; }
	int getAnioFin() { return this->Fecha_final.tm_year; }
	int getDiaInicio() { return this->Fecha_inicio.tm_mday; }
	int getMesInicio() { return this->Fecha_inicio.tm_mon; }
	int getAnioInicio() { return this->Fecha_inicio.tm_year; }
#pragma once
	void setJefe(cJefes* jefe) { this->jefe = jefe; }
	void setDiafin(int dia) { this->Fecha_final.tm_mday = dia; }
	void setMesfin(int mes) { this->Fecha_final.tm_mon = mes; }
	void setAniofin(int anio) { this->Fecha_final.tm_year = anio;}
	void setestado(Estados estado) { this->Estado = estado; }
};