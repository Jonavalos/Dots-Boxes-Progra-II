#include "stratAleatorio.h"

void stratAleatorio::strat(tabla* mat) {
	int fil = 7;
	vecPosicionesLibres vec;

	if (mat == nullptr) { throw new exception; }
	if (dynamic_cast<tabla_3x3*>(mat)) { fil = 7; }
	if (dynamic_cast<tabla_3x4*>(mat)) { fil = 9; }
	if (dynamic_cast<tabla_3x5*>(mat)) { fil = 11; }

	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < 7; j++) {
			if (validar::isLibre(mat, i, j)) {
				vec.add(i, j);
			}
		}
	}

	srand((long)time(0));
	int x = (rand() % (vec.getCan() + 1));
	if (vec.getPosLibre(x) != nullptr) {
		mat->setLinea(vec.getPosLibre(x)->getFila(), vec.getPosLibre(x)->getCol());
		vec.remove(vec.getPosLibre(x)->getFila(), vec.getPosLibre(x)->getCol());
	}
}