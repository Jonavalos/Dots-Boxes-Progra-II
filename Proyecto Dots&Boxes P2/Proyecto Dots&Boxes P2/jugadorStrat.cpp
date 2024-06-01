#include "jugadorStrat.h"

jugadorStrat::jugadorStrat() : _stratPtr(nullptr) {

}

void jugadorStrat::setStrat(estrategia* obj) {
	if (_stratPtr != nullptr) { delete _stratPtr; }
	_stratPtr = obj;
}

void jugadorStrat::runStrat(tabla* mat) {
	_stratPtr->strat(mat);
}