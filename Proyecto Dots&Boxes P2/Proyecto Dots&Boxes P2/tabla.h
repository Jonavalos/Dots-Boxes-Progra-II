#pragma once
#include "bibliotecas.h"

class tabla { //interfaz del tablero
public:
	tabla();
	virtual ~tabla();

	virtual void setLinea(int, int) = 0;
	virtual string toString() = 0;

	virtual friend ostream& operator<<(ostream& COUT, tabla& tabla) = 0;

};