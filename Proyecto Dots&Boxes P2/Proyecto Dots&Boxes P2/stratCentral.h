#pragma once
#include "estrategia.h"

class stratCentral : public estrategia {
public:
	virtual void strat(tabla* mat, vecPosicionesLibres& vec);

};