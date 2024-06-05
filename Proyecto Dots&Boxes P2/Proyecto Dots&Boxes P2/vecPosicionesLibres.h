#pragma once
#include "bibliotecas.h"
#include "posicionLibre.h"
class tabla;
class vecPosicionesLibres {
public:
	vecPosicionesLibres();
	virtual ~vecPosicionesLibres();

	void llenar(tabla* mat);
	void llenarOcupadas(tabla* mat);
	int getCan();

	bool add(int, int);
	void remove(int, int);
	posicionLibre* getPosLibre(int);



private:
	int _can;
	int _tam;
	posicionLibre** _vec;

};

