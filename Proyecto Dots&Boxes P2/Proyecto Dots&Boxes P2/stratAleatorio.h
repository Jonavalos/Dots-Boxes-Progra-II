#pragma once
#include "estrategia.h"
#include <ctime>

class stratAleatorio : public estrategia {
public:
	virtual void strat(tabla* mat, vecPosicionesLibres& vec);

	
};