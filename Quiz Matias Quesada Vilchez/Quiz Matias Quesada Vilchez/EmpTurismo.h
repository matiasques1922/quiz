#pragma once
#include "ContenedorV.h"

class EmpTurismo {
private:
	string nombreE;
	string telefonoE;
	ContenedorV* contViajs;
public:
	EmpTurismo();
	virtual ~EmpTurismo();
	void creaViaje();
	void imprimeViajesDeAutos();
};
