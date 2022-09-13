#include "cProgramadres.h"

cProgramadores::cProgramadores(string nombre, string apellido, tm fecha, string telefono, bool horario, int Tam): Nombre(nombre), Apellido(apellido), Fecha_nac(fecha), Telefono(telefono)
{
	this->Horario = horario;
	this->Array_proy = new cListaProyectos(Tam);
}

cProgramadores::~cProgramadores()
{
	if (Array_proy != NULL)
		delete[] Array_proy;
}