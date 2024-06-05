#pragma once
#include "bibliotecas.h"

class jugada {
public:
	jugada(int, int);
	virtual ~jugada();

	int getFila();
	int getCol();

private:
	int _fila;
	int _columna;

};

