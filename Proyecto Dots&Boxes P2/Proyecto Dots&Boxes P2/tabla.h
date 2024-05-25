#pragma once
#include "bibliotecas.h"

class tabla {
public:
	tabla();
	virtual ~tabla();

	virtual void setLinea(int, int) = 0;
	virtual string toString() = 0;

};