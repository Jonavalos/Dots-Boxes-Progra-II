#pragma once
#include "tabla.h"

//HACER ITERADOR

class vecTablas //AKA vector de tableros, AKA tablero compuesto
{
private:
	tabla** vec;
	int tam; int can;

public:
	vecTablas() {
		tam = 20; can = 0;
		vec = new tabla * [tam];
		for (int i = 0;i < tam;i++)
			vec[i] = nullptr;
	}
	virtual ~vecTablas() {
		//for (int i = 0;i < can;i++)
			//delete vec[i];
		delete[] vec;
	}
	void agregar(tabla* tab) {
		vec[can++] = tab;
	}

	string toString() {
		stringstream s;
		for (int i = 0;i < can;i++) {
			s << vec[i] << endl;
		}
		return s.str();
	}

};

