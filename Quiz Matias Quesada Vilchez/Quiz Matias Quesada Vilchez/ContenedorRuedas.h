#pragma once
#include "Rueda.h"

class ContenedorRuedas {
private:
	Rueda** vec;
	int can;
	int tam;
public:
	ContenedorRuedas(int);
	virtual ~ContenedorRuedas();

	void ingresaRuedas(int);
	string toString();
	};

