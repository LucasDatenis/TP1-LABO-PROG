// TP1-LABO-PROG.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "cJefes.h"
#include "cProyecto.h"

int main()
{
	bool verificar = true;
	cJefes* jefe1 = new cJefes("Julio", "Cortazar", 1550417, "4512-1670", 20);
	cProyecto* proyecto1 = new cProyecto("Destiny", Estados::Desarrollo, 15, 9, 2022, 30, 11, 2022);
	cProgramadores* programador1 = new cProgramadores("Mario", "Ruiz", 20, 4, 2000, "15 5222-3645", true, 4);

	
	verificar = jefe1->Asignar_proyecto(proyecto1);


	delete jefe1;
	delete proyecto1;
	delete programador1;

	system("pause");
	return 0;
}


