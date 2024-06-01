#pragma once
#include "bibliotecas.h"

class posicionLibre {
public:
	posicionLibre();
	posicionLibre(int, int);

	int getFila();
	int getCol();

private:
	int _fila;
	int _columna;

};

