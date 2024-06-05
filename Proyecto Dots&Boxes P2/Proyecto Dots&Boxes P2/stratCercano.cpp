#include "stratCercano.h"

void stratCercano::strat(tabla* mat, vecPosicionesLibres& vec) {
	srand(time(0));
	int x = rand() % (vec.getCan() + 1);

	if (vec.getPosLibre(x) != nullptr) {
		mat->setLinea(vec.getPosLibre(x)->getFila(), vec.getPosLibre(x)->getCol());
	}
}