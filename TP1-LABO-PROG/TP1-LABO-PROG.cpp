// TP1-LABO-PROG.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "cJefes.h"
#include "cProyecto.h"

int main()
{
	time_t now = time(NULL);
	bool verificar = true;
	cJefes* jefe1 = new cJefes("Julio", "Cortazar", 1550417, "4512-1670", 5);
	cProyecto* proyecto1 = new cProyecto("Destiny", Estados::Desarrollo, now, 4, 12, 2024);
	//cProyecto* proyecto2 = new cProyecto("Destiny 2", Estados::Desarrollo, now, 4, 12, 2024);
	//cProyecto* proyecto3 = new cProyecto("Destiny 3", Estados::Desarrollo, now, 4, 12, 2024);
	//cProyecto* proyecto4 = new cProyecto("Destiny 4", Estados::Desarrollo, now, 4, 12, 2024);
	//cProyecto* proyecto5 = new cProyecto("Destiny 5", Estados::Desarrollo, now, 4, 12, 2024);
	//cProyecto* proyecto6 = new cProyecto("Destiny 6", Estados::Desarrollo, now, 4, 12, 2024);
	//
	
	verificar = jefe1->Asignar_proyecto(proyecto1);
	//verificar = jefe1->Asignar_proyecto(proyecto2);
	//verificar = jefe1->Asignar_proyecto(proyecto3);
	//verificar = jefe1->Asignar_proyecto(proyecto4);
	//verificar = jefe1->Asignar_proyecto(proyecto5);
	//verificar = jefe1->Asignar_proyecto(proyecto6);

	delete jefe1;
	delete proyecto1;
	//delete proyecto2;
	//delete proyecto3;
	//delete proyecto4;
	//delete proyecto5;
	//delete proyecto6;

	system("pause");
	return 0;
}


