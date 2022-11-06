#pragma once
#include "Viaje.h"

class Nodo {
private:
	Viaje* ptrV;
	Nodo* sig;
public: 
	Nodo(Viaje*, Nodo*);
	virtual ~Nodo();
	Viaje* getViaje();
	Nodo* getSig();
	void setSig(Nodo*);
	void setViaje(Viaje*);

};

