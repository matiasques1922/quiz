#include "Ruta.h"

Ruta::Ruta(string ori, string dest, double cost, Fecha* fec):origen(ori), destino(dest), costo(cost), fecPtr(fec) {
}
Ruta:: ~Ruta() {
	if (fecPtr != NULL) {
		delete fecPtr;
	}
}
string Ruta::toString() {
	stringstream s;
	s <<" "<<endl
		<< "Origen: " << origen << endl
		<< "Destino: " << destino << endl
		<< "Costo: " << costo << endl << endl
		<< fecPtr->toString() << endl;
	return s.str();

}
