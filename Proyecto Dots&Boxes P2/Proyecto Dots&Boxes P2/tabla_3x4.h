#pragma once
#include "tabla.h"

class tabla_3x4 : public tabla {
public:
	tabla_3x4();
	virtual ~tabla_3x4();

	virtual void setLinea(int, int);
	virtual string toString();

private:
	char** _tabla;
	int _filas;
	int _columnas;

};