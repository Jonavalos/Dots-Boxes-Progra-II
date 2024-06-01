#pragma once
#include "estrategia.h"
#include "vecPosicionesLibres.h"
#include <ctime>

class stratAleatorio : public estrategia {
public:
	virtual void strat(tabla* mat);

};