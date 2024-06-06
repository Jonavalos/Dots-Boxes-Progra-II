#pragma once
#include "estrategia.h"
#include "jugador.h"

class stratPeriferico : public estrategia {
public:
	virtual bool strat(tabla* mat, vecPosicionesLibres& vec);

};