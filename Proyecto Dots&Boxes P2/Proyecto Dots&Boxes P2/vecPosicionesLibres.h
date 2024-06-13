/* -------------------------------------------------------------------+
* |
* (c) 2024 |
* 1-1921-0044 - JiaYu Wu Liang |
* 1-1892-0119 - Jonathan Avalos Montero |
* version 1.0.0 2024-06-13 |
* |
* -------------------------------------------------------------------+
*/

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

