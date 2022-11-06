#include "ContenedorRuedas.h"

ContenedorRuedas::ContenedorRuedas(int n) {
	can = 0;
	tam = n;
	vec = new Rueda * [n];
	ingresaRuedas(n);
}
ContenedorRuedas:: ~ContenedorRuedas() {
	if (vec != NULL) {
		delete vec;
	}
}
void ContenedorRuedas::ingresaRuedas(int cantRuedas) {
	can = cantRuedas;
	string colorR;
	double radioR;
	cout << "Digite el color de las ruedas: ";
	cin >> colorR;
	cout << "Digite el radio de las ruedas: ";
	cin >> radioR;
	for (int i = 0; i < cantRuedas; i++)
		vec[i] = new Rueda(colorR, radioR);
}
string ContenedorRuedas::toString() {
	stringstream s;
	s << "--------CONT-RUEDAS---------" << endl;
	for (int i = 0; i < can; i++)
		s << vec[i]->toString() << endl;
	return s.str();

}