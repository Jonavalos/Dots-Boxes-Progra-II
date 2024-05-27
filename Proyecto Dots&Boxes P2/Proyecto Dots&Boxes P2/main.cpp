#include <iostream>
#include "tabla_3x3.h"
#include "tabla_3x4.h"
#include "tabla_3x5.h"
using namespace std;

int main() {
	
	tabla* tabla3x3 = new tabla_3x3();

	tabla3x3->setLinea(0, 1);	//correcto
	tabla3x3->setLinea(5, 6);	//correcto
	tabla3x3->setLinea(1, 2);	//correcto
	tabla3x3->setLinea(1, 0);	//correcto
	tabla3x3->setLinea(2, 1);	//correcto
	tabla3x3->setLinea(0, 0);	//incorrecto
	tabla3x3->setLinea(2, 4);	//incorrecto
	cout << tabla3x3->toString();

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
	cout << tabla3x4->toString();

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
	cout << tabla3x5->toString();

	return 0;
}

/*

TO DO:

-METER TODO EN OBJETOBASE
-ITERADOR PARA vecTablas





*/