#pragma once
#include "estrategia.h"

class stratCentral : public estrategia {
public:
	virtual bool strat(tabla* mat, vecPosicionesLibres& vec);

};