#include "Nodo.h"

Nodo::Nodo(Viaje* via, Nodo* s): ptrV(via), sig(s) {}
Nodo:: ~Nodo(){
	if (ptrV != NULL)
		delete ptrV;
	if (sig != NULL)
		delete sig;
}

Viaje* Nodo::getViaje() { return ptrV; }
Nodo* Nodo::getSig() { return sig; }
void Nodo::setSig(Nodo* s) { sig = s; }
void Nodo::setViaje(Viaje* via) { ptrV = via; }
