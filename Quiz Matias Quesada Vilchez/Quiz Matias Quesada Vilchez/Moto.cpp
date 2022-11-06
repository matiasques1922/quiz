#include "Moto.h"

Moto::Moto(string pla, string mar, char let, double pot):MedioDeTransporte(pla, mar, let), potencia(pot) {}

Moto:: ~Moto() {}

string Moto::toString() {
	stringstream s;
	s << "---------MOTO----------" << endl
		<< "Marca: " << MedioDeTransporte::getMarca() << endl
		<< "Placa: " << MedioDeTransporte::getPlaca() << endl
		<< "Potencia: " << potencia << endl;
	return s.str();
}
