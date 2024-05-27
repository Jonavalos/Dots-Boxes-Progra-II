#pragma once
#include "bibliotecas.h"
#include "baseObj.h"
class tabla: public baseObj { //interfaz del tablero
public:
	tabla();
	virtual ~tabla();

	virtual void setLinea(int, int) = 0;
	virtual string toString() const = 0;

	friend ostream& operator<<(ostream& COUT, tabla& tabla){
		COUT << tabla.toString() << endl;
		return COUT;
	}

	virtual string toStringBin() { return ""; }
	virtual string toStringSimple() { return ""; }
	virtual void actualizarTabBinaria(){}
};