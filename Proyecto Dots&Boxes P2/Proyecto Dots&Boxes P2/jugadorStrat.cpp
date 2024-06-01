#include "jugadorStrat.h"

jugadorStrat::jugadorStrat() : _stratPtr(nullptr) {

}

void jugadorStrat::setStrat(estrategia* obj) {
	_stratPtr = obj;
}

void jugadorStrat::runStrat(tabla* mat, vecPosicionesLibres& vec) {
	_stratPtr->strat(mat, vec);
}