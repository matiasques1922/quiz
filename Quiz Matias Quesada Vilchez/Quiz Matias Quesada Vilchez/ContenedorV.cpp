#include "ContenedorV.h"

ContenedorV::ContenedorV() {
	ppio = NULL;
}
ContenedorV:: ~ContenedorV() {}
void ContenedorV::ingresaViaje(Viaje* viajPtr) {
	ppio = new Nodo(viajPtr, ppio);
}
string ContenedorV::toString() {
	stringstream s;
	Nodo* pExt = ppio;
	while (pExt != NULL) {
		if(pExt->getViaje()->getTransporte()->getTipo() == 'a' || pExt->getViaje()->getTransporte()->getTipo() == 'A')
		s << pExt->getViaje()->toString() << endl;
		pExt = pExt->getSig();
	}
	return s.str();
}