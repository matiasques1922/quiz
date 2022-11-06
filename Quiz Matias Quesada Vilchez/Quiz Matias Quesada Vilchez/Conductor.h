#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Conductor {
private:
	string cedula;
	string nombre;
public:
	Conductor(string, string);
	virtual ~Conductor();
	string toString();
	};

