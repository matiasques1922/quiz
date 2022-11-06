#include "Rueda.h"

Rueda::Rueda(string col, double rad): color(col), radio(rad) {}

Rueda:: ~Rueda() {}

string Rueda::toString() {
	stringstream s;
	s << "--------RUEDA---------" << endl
		<< "Color: " << color << endl
		<< "Radio: " << radio << endl;
	return s.str();
}