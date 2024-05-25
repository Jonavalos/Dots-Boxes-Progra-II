#pragma once
#include "tabla.h"

class tabla_3x3 : public tabla {
public:
	tabla_3x3();
	virtual ~tabla_3x3();

	virtual void setLinea(int, int);
	virtual string toString();

private:
	char** _tabla;
	int _filas;
	int _columnas;

};