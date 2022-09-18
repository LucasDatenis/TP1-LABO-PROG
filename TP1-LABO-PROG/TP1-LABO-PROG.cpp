// TP1-LABO-PROG.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "cJefes.h"
#include "cProyecto.h"

int main()
{
	cJefes* jefe1 = new cJefes("Julio", "Cortazar", 15504157, "4512-1670", 20);
	cJefes* jefe2 = new cJefes("Julian", "Pereyra", 20600480, "3364-5899", 15);
	cProyecto* proyecto1 = new cProyecto("Destiny", Estados::Finalizado, 15, 9, 2022, 30, 11, 2022);
	cProgramadores* programador1 = new cProgramadores("Mario", "Ruiz", 20, 4, 2000, "15 5222-3645", true, 4);

	
	jefe1->Asignar_proyecto(proyecto1);
	jefe1->Asignar_Programadores(programador1);

	jefe1->Cambiar_Fecha(4, 6, 2023, proyecto1);

	jefe1->Reasignar_programador(jefe2, programador1);

	if (jefe1->Fin_de_Proyecto(proyecto1) != NULL)
		cout << "Se ha finalizado el proyecto" << endl;

	//jefe1->Imprimir();

	delete jefe1;
	delete jefe2;

	system("pause");

	return 0;
}


