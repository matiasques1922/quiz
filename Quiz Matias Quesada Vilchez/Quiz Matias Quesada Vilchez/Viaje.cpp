#include "Viaje.h"

Viaje::Viaje() {
	codigo = Interfaz::creaCodigo();
	condPtr = Interfaz::creaConductor();
	rutPtr = Interfaz::creaRuta();
	medTPtr = Interfaz::creaTransporte();
}
Viaje::Viaje(string cod, Conductor* cPtr, Ruta* rPtr, MedioDeTransporte* tPtr): codigo(cod), condPtr(cPtr), rutPtr(rPtr), medTPtr(tPtr) {}
Viaje:: ~Viaje() {
	if (condPtr != NULL)
		delete condPtr;
	if (rutPtr != NULL)
		delete rutPtr;
	if (medTPtr != NULL)
		delete medTPtr;
}
MedioDeTransporte* Viaje::getTransporte() { return medTPtr; }
	string Viaje::toString() {
		stringstream s;
		s << "------------VIAJE-------------" << endl
			<< "Codigo: " << codigo << endl
			<< "Conductor: " << condPtr->toString() << endl
			<< "Ruta: " << rutPtr->toString() << endl
			<< "Medio de Transporte: " << medTPtr->toString() << endl;
		return s.str();
	}