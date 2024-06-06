#pragma once
#include "estrategia.h"

class stratCercano : public estrategia {
public:
	virtual bool strat(tabla* mat, vecPosicionesLibres& vec);

};

