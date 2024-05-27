#include <iostream>
#include "tabla_3x3.h"
#include "tabla_3x4.h"
#include "tabla_3x5.h"
#include "vecTablas.h"
using namespace std;

int main() {


	tabla* tabla3x3 = new tabla_3x3();

	tabla3x3->setLinea(0, 1);	//correcto
	tabla3x3->setLinea(9, 9);	//correcto
	tabla3x3->setLinea(5, 6);	//correcto
	tabla3x3->setLinea(1, 2);	//correcto
	tabla3x3->setLinea(1, 0);	//correcto
	tabla3x3->setLinea(2, 1);	//correcto
	tabla3x3->setLinea(0, 0);	//incorrecto
	tabla3x3->setLinea(2, 4);	//incorrecto
	cout << *tabla3x3 << endl;
	/*
	tabla* tabla3x4 = new tabla_3x4();
	cout << endl << endl;

	tabla3x4->setLinea(0, 1);	//correcto
	tabla3x4->setLinea(5, 6);	//correcto
	tabla3x4->setLinea(1, 2);	//correcto
	tabla3x4->setLinea(1, 0);	//correcto
	tabla3x4->setLinea(2, 1);	//correcto
	tabla3x4->setLinea(8, 5);	//correcto
	tabla3x4->setLinea(7, 6);	//correcto
	tabla3x4->setLinea(0, 0);	//incorrecto
	tabla3x4->setLinea(2, 4);	//incorrecto
	cout << *tabla3x4 << endl;

	tabla* tabla3x5 = new tabla_3x5();
	cout << endl << endl;

	tabla3x5->setLinea(0, 1);	//correcto
	tabla3x5->setLinea(5, 6);	//correcto
	tabla3x5->setLinea(1, 2);	//correcto
	tabla3x5->setLinea(1, 0);	//correcto
	tabla3x5->setLinea(2, 1);	//correcto
	tabla3x5->setLinea(8, 5);	//correcto
	tabla3x5->setLinea(7, 6);	//correcto
	tabla3x5->setLinea(0, 0);	//incorrecto
	tabla3x5->setLinea(2, 4);	//incorrecto
	cout << *tabla3x5 << endl;

	cout << endl;
	cout << "************----------************" << endl;
	cout << endl;

	vecTablas* veta = new vecTablas();
	veta->agregar(tabla3x3);
	veta->agregar(tabla3x4);
	veta->agregar(tabla3x5);
	cout << *veta << endl;
	cout << endl;
	
	*/
	
	cout <<"aaaa"<< endl;
	cout << tabla3x3->toStringSimple() << endl;
	tabla3x3->actualizarTabBinaria();
	cout << tabla3x3->toStringBin() << endl;
	
	return 0;
}

/*

TO DO:


-iterador para matrices
-matrices binarias en 3x4 y 3x5
-uso de matrices binarias para procesos logicos
-usar validar en 3x4 y 3x5


*/