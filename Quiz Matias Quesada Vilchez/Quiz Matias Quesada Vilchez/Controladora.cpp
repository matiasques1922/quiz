#include "Controladora.h"

void Controladora::control0(){
	int op = 0;
	control2();
	do {
		op = control1();
		control6(op);
		system("pause");
	} while (op != 3);
}
int Controladora::control1(){
	return Vista::menu();
}
void Controladora::control2(){
	Vista::infoEstudiante();
	Vista::empresa();
}
void Controladora::control3(){
	Vista::creaViaje();
}
void Controladora::control4(){
	Vista::viajesAutos();
}
void Controladora::control5(){
	Vista::despedida();
}
void Controladora::control6(int op){
	switch (op) {
	case 1: control3(); break;
	case 2: control4(); break;
	case 3: control5(); break;
	};
}