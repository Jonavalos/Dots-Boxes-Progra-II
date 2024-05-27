#pragma once
#include "baseObj.h"
#include "tabla.h"
class iteradorVecTablas
{
private:
	int i; 
	int can; 
	tabla** vec; 

public:
	iteradorVecTablas(int cant, tabla* v[]);
	virtual ~iteradorVecTablas();
	virtual bool masElementos();
	virtual tabla* proximoElemento();
	virtual string toString() const;

};

