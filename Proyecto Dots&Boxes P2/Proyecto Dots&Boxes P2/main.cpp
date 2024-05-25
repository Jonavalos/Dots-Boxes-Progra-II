#include <iostream>
#include "tabla_3x3.h"
using namespace std;

int main() {
	cout << "me cago en mi vida" << endl;

	tabla* tabla3x3 = new tabla_3x3();

	tabla3x3->setLinea(0, 1);	//correcto
	tabla3x3->setLinea(5, 6);	//correcto
	tabla3x3->setLinea(1, 2);	//correcto
	tabla3x3->setLinea(1, 0);	//correcto
	tabla3x3->setLinea(2, 1);	//correcto
	tabla3x3->setLinea(0, 0);	//incorrecto
	tabla3x3->setLinea(2, 4);	//incorrecto
	cout << tabla3x3->toString();

	return 0;
}
