#pragma once

#include "cListaProyectos.h"

class cJefes;

class cProgramadores
{
private:
	//Atributos descriptivos
	const string Nombre;
	const string Apellido;
	tm Fecha_nac;
	const string Telefono;
	//Atributos funcionales
	bool Horario; // true: full time ----- false: part time
	bool Disponible;
	cListaProyectos* Array;
	static int id_max;
	const int id;
	cJefes* jefe;


public:

	cProgramadores(string nombre, string apellido, int dia, int mes, int anio, string telefono, bool horario, int Tam);
	~cProgramadores();

	cProyecto* Fin_Proyecto(cProyecto* proyecto);
	void Entregar_Proyecto(cEntregas* entrega, cProyecto* proyecto, Estados estado, int dia, int mes, int anio);

	bool getHorario() { return this->Horario; }
	bool getDisponible() { return this->Disponible; }
	string getTelefono() const { return this->Telefono; }
	string getNombre() const { return this->Nombre; }
	string getApellido() const { return this->Apellido; }
	tm getFechaNac() const { return this->Fecha_nac; }
	int getId() const { return this->id; }

	void setJefe(cJefes* jefe) { this->jefe = jefe; }
};

