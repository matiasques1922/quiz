#pragma once
#include "Fecha.h"

class Ruta {
private:
	string origen;
	string destino;
	double costo;
	Fecha* fecPtr;
public:
	Ruta(string, string, double, Fecha*);

	virtual ~Ruta();
	string toString();
};

