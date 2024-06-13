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
#include "tabla.h"
#include "iteradorVecTablas.h"
//HACER ITERADOR

class vecTablas //AKA vector de tableros, AKA tablero compuesto
{
private:
	tabla** vec;
	int tam; int can;

public:
	vecTablas();
	virtual ~vecTablas();
	void agregar(tabla* tab);
	tabla* getTabla(int pos);
	int getCan();

	string toString() const;
	iteradorVecTablas* getIterador() const;
	friend ostream& operator <<(ostream& COUT, vecTablas& obj);

};

