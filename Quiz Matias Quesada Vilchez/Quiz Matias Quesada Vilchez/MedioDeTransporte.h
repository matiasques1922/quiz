#pragma once
#include "ContenedorRuedas.h"

class MedioDeTransporte {
	//… :
	string placa;
	string marca;
	char tipo; // 'a' = auto 'm' = moto
	ContenedorRuedas* contRds;
public:
	MedioDeTransporte(string, string, char);
	virtual ~MedioDeTransporte();

	string getPlaca();
	string getMarca();
	char getTipo();
	void setPlaca(string);
	void setMarca(string);
	void setTipo(char);

	virtual string toString() = 0; // M.V.P.
};

