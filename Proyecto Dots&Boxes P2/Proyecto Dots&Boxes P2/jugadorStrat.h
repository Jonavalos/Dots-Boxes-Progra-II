#pragma once
#include "bibliotecas.h"
#include "estrategia.h"
#include "tabla.h"
#include "vecPosicionesLibres.h"
class jugadorStrat {
public:
	jugadorStrat();

	void setStrat(estrategia*);
	void runStrat(tabla* mat, vecPosicionesLibres& vec);

private:
	estrategia* _stratPtr;

};

