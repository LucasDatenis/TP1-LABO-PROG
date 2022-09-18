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
	int proyectos_max;
	cListaProyectos *lista_proyectos;
	cListaProgramadores* lista_programadores;

public:
	cJefes(string nombre, string apellido, long int dni, string telefono, int pro_max);
	~cJefes();

	bool Asignar_proyecto(cProyecto* poyecto);
	//cProyecto* Quitar_ptoyecto(int id);
	void Asignar_Programadores(cProgramadores* programador);
	void Reasignar_programador(cJefes* jefes, cProgramadores* programador);
	cJefes* Fin_de_Proyecto(cProyecto* proyecto);
	void Cambiar_Fecha(int dia, int mes, int anio, cProyecto* proyecto);
	void Revisar_Entrega(cProyecto* proyecto, cEntregas* entrega, Estados estado);
	void Imprimir();
	void Imprimir_por_Estado_y_Anio(int anio, Estados estado);

	string getNombre() { return this->Nombre; }
	string getApellido() { return this->Apellido; }

};