#include "cProgramadres.h"

int cProgramadores::id_max = 1;

cProgramadores::cProgramadores(string nombre, string apellido, int dia, int mes, int anio, string telefono, bool horario, int Tam): id(id_max), Nombre(nombre), Apellido(apellido), Telefono(telefono)
{
	this->id_max++;
	this->Fecha_nac.tm_year = anio;
	this->Fecha_nac.tm_mon = mes;
	this->Fecha_nac.tm_mday = dia;
	this->Horario = horario;
	this->Disponible = true;
	this->Array_proy = new cListaProyectos(Tam);
}

cProgramadores::~cProgramadores()
{
	if (Array_proy != NULL)
		delete Array_proy;
}