#include "EmpTurismo.h"

EmpTurismo::EmpTurismo() {
	contViajs = new ContenedorV();
}

EmpTurismo::~EmpTurismo() {
	if (contViajs != NULL)
		delete contViajs;
}
void EmpTurismo::creaViaje() {
	string cod;
	Conductor* con;
	Ruta* r;
	MedioDeTransporte* medT;
	Viaje* viajPtr;

	cout << "Creando un viaje" << endl;
	cod = Interfaz::creaCodigo();
	con = Interfaz::creaConductor();
	r = Interfaz::creaRuta();
	medT = Interfaz::creaTransporte();
	viajPtr = new Viaje(cod, con, r, medT);
	contViajs->ingresaViaje(viajPtr);
}
void EmpTurismo::imprimeViajesDeAutos() {
	cout << contViajs->toString() << endl;
}
