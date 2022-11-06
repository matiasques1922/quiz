#pragma once
#include "Fecha.h"

class Rueda {
private:
	string color;
	double radio;
public:
	Rueda(string, double);
	virtual ~Rueda();
	string toString();
	};


