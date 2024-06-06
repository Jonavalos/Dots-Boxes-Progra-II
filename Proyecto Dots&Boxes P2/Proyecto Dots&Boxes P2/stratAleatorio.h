#pragma once
#include "estrategia.h"
#include <ctime>

class stratAleatorio : public estrategia {
public:
	virtual bool strat(tabla* mat, vecPosicionesLibres& vec);

	
};