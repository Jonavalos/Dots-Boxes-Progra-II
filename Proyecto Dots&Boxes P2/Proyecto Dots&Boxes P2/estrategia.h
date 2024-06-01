#pragma once
#include "bibliotecas.h"
#include "tabla_3x3.h"
#include "tabla_3x4.h"
#include "tabla_3x5.h"

class estrategia {
public:
	virtual void strat(tabla* mat) = 0;

};