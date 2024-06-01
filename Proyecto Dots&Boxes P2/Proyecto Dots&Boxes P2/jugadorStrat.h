#pragma once
#include "bibliotecas.h"
#include "estrategia.h"
#include "tabla.h"

class jugadorStrat {
public:
	jugadorStrat();

	void setStrat(estrategia*);
	void runStrat(tabla*);

private:
	estrategia* _stratPtr;

};

