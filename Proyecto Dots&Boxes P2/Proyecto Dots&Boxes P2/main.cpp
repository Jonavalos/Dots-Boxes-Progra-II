#include <iostream>
#include "controladora.h"
#include "ansi_term.h"
#include "tablaPrincipal.h"
#include "jugada.h"

using namespace std;

int main() {

	tabla* tabla3x3 = new tabla_3x3();
	tabla* tabla3x4 = new tabla_3x4();
	
	//cout << *tabla3x4 << endl;
	//tabla3x3->setLinea(0, 1);	//correcto
	//cout << *tabla3x3 << endl;
	//tabla3x3->setLinea(9, 9);	//correcto
	//tabla3x3->setLinea(5, 6);	//correcto
	//tabla3x3->setLinea(1, 2);	//correcto
	//tabla3x3->setLinea(1, 0);	//correcto
	//tabla3x3->setLinea(2, 1);	//correcto
	//tabla3x3->setLinea(0, 5);	//correcto
	//tabla3x3->setLinea(1, 6);	//correcto
	//tabla3x3->setLinea(2, 5);	//correcto
	//tabla3x3->setLinea(3, 0);	//correcto
	//tabla3x3->setLinea(3, 2);	//correcto
	//tabla3x3->setLinea(3, 4);	//correcto
	//tabla3x3->setLinea(3, 6);	//correcto
	//tabla3x3->setLinea(4, 3);	//correcto
	//tabla3x3->setLinea(4, 5);	//correcto
	//tabla3x3->setLinea(6, 3);	//correcto
	//tabla3x3->setLinea(0, 3);	//correcto
	//tabla3x3->setLinea(1, 2);	//correcto
	//tabla3x3->setLinea(1, 4);	//correcto
	//tabla3x3->setLinea(2, 3);	//correcto
	//tabla3x3->setLinea(4, 1);	//correcto
	//tabla3x3->setLinea(5, 0);	//correcto
	//tabla3x3->setLinea(5, 2);	//correcto
	//tabla3x3->setLinea(6, 1);	//correcto
	//tabla3x3->setLinea(0, 0);	//incorrecto
	//tabla3x3->setLinea(2, 4);	//incorrecto
	//cout << *tabla3x3 << endl;
	


	vecTablas* veta = new vecTablas();
	veta->agregar(tabla3x4);
	cout << *veta << endl;
	cout << endl;
	
	/*tablaPrincipal* princial = new tablaPrincipal();
	princial->agregar(tabla3x3);
	princial->actualizarTabBin2();
	princial->agregar(tabla3x4);
	princial->actualizarTabBin2();
	cout << princial->toString() << endl;
	princial->agregar(tabla3x3);
	princial->actualizarTabBin2();
	cout << princial->toString() << endl;
	cout << princial->toStringBin() << endl;*/
	
	cout <<"abc"<< endl;

	juego::jugadorVsCompuCer(veta);

	return 0;
}
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
*/
/*

TO DO:

-jugadores en 'juego'

-iterador para matrices
-matrices binarias en 3x4 y 3x5
-uso de matrices binarias para procesos logicos

*/