// TP1-LABO-PROG.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "cJefes.h"
#include "cProyecto.h"

int main()
{
	cJefes* jefe1 = new cJefes("Julio", "Cortazar", 15504157, "4512-1670", 20);
	cJefes* jefe2 = new cJefes("Julian", "Pereyra", 20600480, "3364-5899", 10);

	cProyecto* proyecto1 = new cProyecto("Destiny", Estados::Espera, 15, 9, 2022, 30, 11, 2022);
	cProyecto* proyecto2 = new cProyecto("Final Fantasy", Estados::Desarrollo, 15, 9, 2022, 30, 11, 2022);
	cProyecto* proyecto3 = new cProyecto("Chaos Reach", Estados::Espera, 15, 9, 2022, 30, 11, 2024);
	cProyecto* proyecto4 = new cProyecto("Caos Reach", Estados::Espera, 15, 9, 2022, 30, 11, 2024);

	cProgramadores* programador1 = new cProgramadores("Mario", "Ruiz", 20, 4, 2000, "15 5222-3645", true, 6);

	cEntregas* entrega1_1 = new cEntregas();
	//cEntregas* entrega1_2 = new cEntregas();
	cEntregas* entrega2_1 = new cEntregas();
	//cEntregas* entrega2_2 = new cEntregas();
	cEntregas* entrega3_1 = new cEntregas();
	//cEntregas* entrega3_2 = new cEntregas();
	
	jefe1->Asignar_Programadores(programador1);

	jefe1->Asignar_proyecto(proyecto1);
	jefe1->Asignar_proyecto(proyecto2);
	jefe1->Asignar_proyecto(proyecto3);


	programador1->Recibir_Proyecto(proyecto1);
	programador1->Recibir_Proyecto(proyecto2);
	programador1->Recibir_Proyecto(proyecto3);
	//programador1->Recibir_Proyecto(proyecto4);

	cout << "Proyecto " << proyecto1->getnombre() << endl;
	programador1->Entregar_Proyecto(entrega1_1, proyecto1, Estados::Finalizado, 20, 9, 2022);
	//programador1->Entregar_Proyecto(entrega1_2, proyecto1, Estados::Finalizado, 20, 9, 2022);

	cout << "Proyecto " << proyecto2->getnombre() << endl;
	programador1->Entregar_Proyecto(entrega2_1, proyecto2, Estados::Finalizado, 20, 9, 2022);
	//programador1->Entregar_Proyecto(entrega2_2, proyecto2, Estados::Finalizado, 20, 9, 2022);

	cout << "Proyecto " << proyecto3->getnombre() << endl;
	programador1->Entregar_Proyecto(entrega3_1, proyecto3, Estados::Finalizado, 20, 9, 2022);
	//programador1->Entregar_Proyecto(entrega3_2, proyecto3, Estados::Finalizado, 20, 9, 2022);

	jefe1->Reasignar_programador(jefe2, programador1);

	cout << endl;

	jefe1->Imprimir();
	jefe1->Imprimir_por_Estado_y_Anio(2022, Estados::Finalizado);

	delete jefe1;
	delete jefe2;
	//delete proyecto1;
	//delete proyecto2;
	//delete proyecto3;

	system("pause");

	return 0;
}


