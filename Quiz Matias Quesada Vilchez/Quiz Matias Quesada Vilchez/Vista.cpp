#include "Vista.h"
EmpTurismo* empTur = new EmpTurismo();

int Vista::menu() {
	int op;
	system("cls");
	cout << endl << endl;
	cout << " ---------------MENU----------------" << endl;
	cout << " 1- Ingresar Viaje. " << endl;
	cout << " 2- Reporte de viajes de autos. " << endl;
	cout << " 3- Salir. " << endl;
	cout << " -----------------------------------" << endl;
	cout << " Digite opcion: ";
	cin >> op;
	return op;
}
void Vista::creaViaje() {
	system("cls");
	empTur->creaViaje();
}
void Vista::infoEstudiante() {
	cout << endl << endl << endl;
	cout << " UNIVERSIDAD NACIONAL" << endl;
	cout << " Curso: Programacion I" << endl;
	cout << " Estudiante: Matias Quesada Vilchez" << endl;
	cout << " Quiz: DRC " << endl;
	cout << " " << endl;
	cout << endl << endl << endl << endl;
	system("pause");

}
void Vista::despedida() {
	system("cls");
	cout << " ADIOS: M U C H A S G R A C I A S" << endl;
}
void Vista::viajesAutos() {
	system("cls");
	empTur->imprimeViajesDeAutos();
}
void Vista::empresa() {
	system("cls");
	cout << endl << endl;
	cout << "--------------EMPRESA-----------------" << endl;
	cout << "Creando una Empresa de Turismo" << endl;
	empTur = new EmpTurismo();
	system("pause");
}