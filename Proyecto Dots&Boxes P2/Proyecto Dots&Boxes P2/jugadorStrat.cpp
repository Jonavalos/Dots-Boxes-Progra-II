#include "jugadorStrat.h"

jugadorStrat::jugadorStrat() : _stratPtr(nullptr) {

}

void jugadorStrat::setStrat(estrategia* obj) {
	_stratPtr = obj;
}

bool jugadorStrat::runStrat(tabla* mat, vecPosicionesLibres& vec) {
	if (_stratPtr->strat(mat, vec)) {
		return true;
	}
	return false;
}