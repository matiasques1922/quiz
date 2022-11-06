#include "Interfaz.h"

string Interfaz::creaCodigo() {
	string cod;
	cout << "Ingrese el codigo del Viaje: ";
	cin >> cod;
	return cod;
}

Conductor* Interfaz::creaConductor() {
	string nom, ced;
	Conductor* conPtr = NULL;
	cout << "Creando un Conductor" << endl;
	cout << "Ingrese la cedula del conductor: ";
	cin >> ced;
	cout << "Ingrese el nombre del conductor: ";
	cin >> nom;
	conPtr = new Conductor(ced, nom);
	return conPtr;
}

Ruta* Interfaz::creaRuta() {
	int d, m, a;
	string orig , des;
	double cos;
	Fecha* fec = NULL;
	Ruta* rut = NULL;
	cout << "Creando una fecha para la ruta..." << endl;
	cout << "Ingrese el dia: ";
	cin >> d;
	cout << "Ingrese el mes: ";
	cin >> m;
	cout << "Ingrese anio: ";
	cin >> a;
	fec = new Fecha(d, m, a);
	cout << endl;
	cout << "Creando una Ruta" << endl;
	cout << "Ingrese el origen de la ruta: ";
	cin>>orig;
	cout << "Ingrese el destino de la ruta: ";
	cin >> des;
	cout << "Ingrese el costo de la ruta: ";
	cin >> cos;
	rut = new Ruta(orig, des, cos, fec);
	return rut;
}
MedioDeTransporte* Interfaz::creaTransporte() {
	string pla, mar;
	char letra;
	int nP;
	double pot;
	MedioDeTransporte* mTransPtr = NULL;
	cout << "Creando un transporte..." << endl;
	cout << "Ingrese la placa...";
	cin >> pla;
	cout << "Ingrese la marca...";
	cin >> mar;
	cout << "Ingrese el tipo...." << endl;
	cout << "Es Auto o Moto ? ... a/m....";
	cin >> letra;
	if (letra == 'a' || letra == 'A') {
		cout << "Ingrese el número de pasajeros del auto...";
		cin >> nP;
		mTransPtr = new Auto(pla, mar, letra, nP);
	}
	else {
		cout << "Ingrese la potencia de la moto...";
		cin >> pot;
		mTransPtr = new Moto(pla, mar, letra, pot);
	}
	return mTransPtr;
}

 