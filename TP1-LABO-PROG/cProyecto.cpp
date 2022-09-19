#include "cProyecto.h"
#include "cJefes.h"


int cProyecto::ID_max = 1;

cProyecto::cProyecto(string nombre, Estados estado, int dia_inicio, int mes_inicio, int anio_inicio, int dia_fin, int mes_fin, int anio_fin): ID(ID_max), Nombre(nombre)
{
	this->ID_max++;
	this->Estado = estado;
	this->Fecha_inicio.tm_year = anio_inicio;
	this->Fecha_inicio.tm_mon = mes_inicio;
	this->Fecha_inicio.tm_mday = dia_inicio;
	this->Fecha_final.tm_mday = dia_fin;
	this->Fecha_final.tm_mon = mes_fin;
	this->Fecha_final.tm_year = anio_fin;
	this->jefe = NULL;
	this->lista_entregas = new cListaEntregas();
	this->cant_entregas = 0;
	this->entregado = false;
}

cProyecto::~cProyecto()
{
	if (lista_entregas != NULL)
		delete lista_entregas;
}

void cProyecto::Recibir_entrega(cEntregas* entrega)
{
	bool verificar = lista_entregas->Agregar(entrega);
	if (verificar != true) {
		cout << "No es posible asignar la entrega" << endl;
	}
	else
		entrega->setNroentrega(cant_entregas);
}
