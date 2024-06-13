#include "stratIslas.h"

bool stratIslas::strat(tabla* mat, vecPosicionesLibres& vec) {
	int f = 6; //filas
	int c = 6; //columnas

	if (dynamic_cast<tabla_3x4*>(mat)) {
		int f = 9;
	}
	if (dynamic_cast<tabla_3x5*>(mat)) {
		int f = 12;
	}

	if (!dynamic_cast<tabla_3x3*>(mat) && !dynamic_cast<tabla_3x4*>(mat) && !dynamic_cast<tabla_3x5*>(mat)) {
		c = 12;
	}

	for (int i = 1;i < f; i += 2) {
		for (int j = 0;j < c; j += 2) {
			if (validar::isLibre(mat, i, j) && validar::isValidaParaLinea(i, j)) {
				mat->setLinea(i, j);
				vec.remove(i, j);
				return true;
			}
			if (validar::isLibre(mat, i + 1, j + 1) && validar::isValidaParaLinea(i + 1, j + 1)) {
				mat->setLinea(i + 1, j + 1);
				vec.remove(i + 1, i + 1);
				return true;
			}
			if (validar::isLibre(mat, i + 1, c) && validar::isValidaParaLinea(i + 1, c)) {
				mat->setLinea(i + 1, c);
				vec.remove(i + 1, c);
				return true;
			}
		}
	}

	srand((long)time(0));
	int x = (rand() % (vec.getCan() + 1));

	if (vec.getPosLibre(x) != nullptr) {
		mat->setLinea(vec.getPosLibre(x)->getFila(), vec.getPosLibre(x)->getCol());
		vec.remove(vec.getPosLibre(x)->getFila(), vec.getPosLibre(x)->getCol());
		return true;
	}
	return false;
}