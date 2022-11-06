#include "Conductor.h"

Conductor::Conductor(string ced, string nom):cedula(ced), nombre(nom) {}
Conductor:: ~Conductor() {}

string Conductor::toString() {
	stringstream s;
	s << " "<<endl
		<< "Cedula: " << cedula << endl
		<< "Nombre: " << nombre << endl;
	return s.str();

}