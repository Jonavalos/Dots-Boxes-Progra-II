#pragma once
#include "estrategia.h"

class stratIslas : public estrategia {
public:
	virtual bool strat(tabla* mat, vecPosicionesLibres& vec);

};