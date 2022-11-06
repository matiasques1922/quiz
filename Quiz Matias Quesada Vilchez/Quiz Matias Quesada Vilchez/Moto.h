#pragma once
#include "MedioDeTransporte.h"

class Moto : public MedioDeTransporte {
private:
	double potencia;
public:
	Moto(string, string, char, double);
	virtual ~Moto();
	string toString();
	};
