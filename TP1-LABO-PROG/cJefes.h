#pragma once

#include "Header.h"
#include "cListaProgramadores.h"

class cJefes
{
private:
	const string Nombre;
	const string Apellido;
	const long int DNI;
	const string Telefono;
	bool disponible;
	cListaProyectos *lista_proyectos;
	cListaProgramadores* lista_programadores;


public:
	cJefes(string nombre, string apellido, long int dni, string telefono, int pro_max);
	~cJefes();

	bool Asignar_proyecto(cProyecto* poyecto);
	cProyecto* Quitar_ptoyecto();

	void Asignar_Programadore(cProgramadores* programador);
	void Reasignar_programador(cJefes* jefes, cProgramadores* programador);

	void Fin_de_Proyecto(int dia, int mes, int anio, cProyecto* proyecto);

	void Revisar_Entrega(cProyecto* proyecto);






};