#pragma once
#include "estrategia.h"

class stratIslas : public estrategia {
public:
	virtual void strat(tabla* mat, vecPosicionesLibres& vec);

};