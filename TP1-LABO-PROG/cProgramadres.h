#pragma once

#include "cListaProyectos.h"

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
	cListaProyectos* Array_proy;
	static int id_max;
	const int id;


public:

	cProgramadores(string nombre, string apellido, int dia, int mes, int anio, string telefono, bool horario, int Tam);
	~cProgramadores();


	bool getHorario() { return this->Horario; }
	bool getDisponible() { return this->Disponible; }
	string getTelefono() const { return this->Telefono; }
	string getNombre() const { return this->Nombre; }
	string getApellido() const { return this->Apellido; }
	tm getFechaNac() const { return this->Fecha_nac; }
	int getId() const { return this->id; }


};

