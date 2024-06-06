#include "stratPeriferico.h"

bool stratPeriferico::strat(tabla* mat, vecPosicionesLibres& vec) {

	for (int i = 1;i <= 5; i += 2) { //fila arriba
		if (validar::isLibre(mat, 0, i) && validar::isValidaParaLinea(0, i)) {
			mat->setLinea(0, i);
			return true;
		}
	}
	for (int i = 1; i <= 5; i += 2) { //columna derecha
		if (validar::isLibre(mat, i, 6) && validar::isValidaParaLinea(i, 6)) {
			mat->setLinea(i, 6);
			return true;
		}
	}
	for (int i = 1;i <= 5; i += 2) { //fila abajo
		if (validar::isLibre(mat, 6, i) && validar::isValidaParaLinea(6, i)) {
			mat->setLinea(6, i);
			return true;
		}
	}
	for (int i = 1; i <= 5; i += 2) { //columna izquierda
		if (validar::isLibre(mat, i, 0) && validar::isValidaParaLinea(i, 0)) {
			mat->setLinea(i, 0);
			return true;
		}
	}
	return false;
}