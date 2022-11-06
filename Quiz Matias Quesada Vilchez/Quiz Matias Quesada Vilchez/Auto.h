#pragma once
#include "MedioDeTransporte.h"

class Auto : public MedioDeTransporte {
private:
	int numPasajeros;
public:
	Auto(string, string, char, int);
	virtual ~Auto();
	string toString();
	};

