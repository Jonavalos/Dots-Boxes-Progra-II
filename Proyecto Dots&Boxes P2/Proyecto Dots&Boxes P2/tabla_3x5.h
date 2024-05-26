#pragma once
#include "tabla.h"

class tabla_3x5 : public tabla {
public:
	tabla_3x5();
	virtual ~tabla_3x5();

	virtual void setLinea(int, int);
	virtual string toString();

private:
	char** _tabla;
	int _filas;
	int _columnas;

};