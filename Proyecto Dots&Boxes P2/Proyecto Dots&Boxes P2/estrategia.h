#pragma once
#include "bibliotecas.h"
#include "tabla_3x3.h"
#include "tabla_3x4.h"
#include "tabla_3x5.h"
#include "vecPosicionesLibres.h"

class estrategia {
public:
	virtual bool strat(tabla* mat, vecPosicionesLibres& vec) = 0;

};