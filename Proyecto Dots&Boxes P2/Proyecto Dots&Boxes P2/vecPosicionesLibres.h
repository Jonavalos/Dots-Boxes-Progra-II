#pragma once
#include "bibliotecas.h"
#include "posicionLibre.h"

class vecPosicionesLibres {
public:
	vecPosicionesLibres();
	virtual ~vecPosicionesLibres();

	int getCan();

	bool add(int, int);
	void remove(int, int);
	posicionLibre* getPosLibre(int);

private:
	int _can;
	int _tam;
	posicionLibre** _vec;

};

