#include "MedioDeTransporte.h"

MedioDeTransporte::MedioDeTransporte(string pla, string mar, char let)
	: placa(pla), marca(mar), tipo(let) {
	if (let == 'a' || let == 'A')
		contRds = new ContenedorRuedas(4);
	else
		contRds = new ContenedorRuedas(2);
}
MedioDeTransporte:: ~MedioDeTransporte() {
	if (contRds != NULL) {
	delete contRds;
 }
}

string MedioDeTransporte::getPlaca() { return placa; }
string MedioDeTransporte::getMarca() { return marca; }
char MedioDeTransporte::getTipo() { return tipo; }
void MedioDeTransporte::setPlaca(string pla) { placa = pla; }
void MedioDeTransporte::setMarca(string mar) { marca = mar; }
void MedioDeTransporte::setTipo(char ti) { tipo = ti; }
