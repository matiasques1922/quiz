#pragma once

#include "Interfaz.h"

class Viaje {
private:
	string codigo;
	Conductor* condPtr;
	Ruta* rutPtr;
	MedioDeTransporte* medTPtr;
public:
	Viaje();
	Viaje(string, Conductor*, Ruta*, MedioDeTransporte*);
	virtual ~Viaje();
	MedioDeTransporte* getTransporte();
	string toString();
};
		