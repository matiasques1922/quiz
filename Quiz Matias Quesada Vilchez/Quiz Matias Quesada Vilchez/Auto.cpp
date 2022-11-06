#include "Auto.h"

Auto::Auto(string pla, string mar, char let, int nP): MedioDeTransporte(pla, mar, let), numPasajeros(nP) { }
Auto:: ~Auto() {}
string Auto::toString() {
	stringstream s;
	s << "AUTO" << endl
		<< "Marca: " << MedioDeTransporte::getMarca() << endl
		<< "Placa: " << MedioDeTransporte::getPlaca() << endl
		<< "Numero de Pasajeros: " << numPasajeros << endl;
	return s.str();
}