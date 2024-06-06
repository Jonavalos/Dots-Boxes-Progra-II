#pragma once
#include "bibliotecas.h"
#include "posicionLibre.h"
#include "jugada.h"

class tabla;
class vecPosicionesLibres {
public:
	vecPosicionesLibres();
	virtual ~vecPosicionesLibres();

	void llenar(tabla* mat);
	void llenarCerca(tabla* mat, jugada*);
	int getCan();
	bool existe(int, int);
	bool add(int, int);
	void remove(int, int);
	void removeAll();
	posicionLibre* getPosLibre(int);

private:
	int _can;
	int _tam;
	posicionLibre** _vec;

};

