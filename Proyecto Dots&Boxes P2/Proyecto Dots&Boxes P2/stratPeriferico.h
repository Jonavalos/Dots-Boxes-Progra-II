#pragma once
#include "estrategia.h"
#include "jugador.h"

class stratPeriferico : public estrategia {
public:
	virtual void strat(tabla* mat, vecPosicionesLibres& vec);

};