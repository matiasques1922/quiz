#pragma once
#include "Conductor.h"
#include "Ruta.h"
#include "Auto.h"
#include "Moto.h"
class Interfaz {
public:
	static string creaCodigo();
	static Conductor* creaConductor();
	static Ruta* creaRuta();
	static MedioDeTransporte* creaTransporte();
};

