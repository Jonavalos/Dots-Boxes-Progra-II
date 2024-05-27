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

	string toString() const;
	iteradorVecTablas* getIterador() const;
	friend ostream& operator <<(ostream& COUT, vecTablas& obj);

};

