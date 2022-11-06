#pragma once
#include "Nodo.h"

class ContenedorV {
private:
	Nodo* ppio;
public:
	ContenedorV();
	virtual ~ContenedorV();
	void ingresaViaje(Viaje*);
	string toString();
};
		
