#include "stratCentral.h"

bool stratCentral::strat(tabla* mat, vecPosicionesLibres& vec) {
	if (dynamic_cast<tabla_3x3*>(mat)) {

		//cuadro interior
		if (validar::isLibre(mat, 2, 3) && validar::isValidaParaLinea(2, 3)) {
			mat->setLinea(2, 3);
			vec.remove(2, 3);
			return true;
		}
		if (validar::isLibre(mat, 3, 4) && validar::isValidaParaLinea(3, 4)) {
			mat->setLinea(3, 4);
			vec.remove(3, 4);
			return true;
		}
		if (validar::isLibre(mat, 4, 3) && validar::isValidaParaLinea(4, 3)) {
			mat->setLinea(4, 3);
			vec.remove(4, 3);
			return true;
		}
		if (validar::isLibre(mat, 3, 2) && validar::isValidaParaLinea(3, 2)) {
			mat->setLinea(3, 2);
			vec.remove(3, 2);
			return true;
		}

		//exterior (periferico)
		for (int i = 1;i <= 5; i += 2) { //fila arriba
			if (validar::isLibre(mat, 0, i) && validar::isValidaParaLinea(0, i)) {
				mat->setLinea(0, i);
				vec.remove(0, i);
				return true;
			}
		}
		for (int i = 1; i <= 5; i += 2) { //columna derecha
			if (validar::isLibre(mat, i, 6) && validar::isValidaParaLinea(i, 6)) {
				mat->setLinea(i, 6);
				vec.remove(i, 6);
				return true;
			}
		}
		for (int i = 1;i <= 5; i += 2) { //fila abajo
			if (validar::isLibre(mat, 6, i) && validar::isValidaParaLinea(6, i)) {
				mat->setLinea(6, i);
				vec.remove(6, i);
				return true;
			}
		}
		for (int i = 1; i <= 5; i += 2) { //columna izquierda
			if (validar::isLibre(mat, i, 0) && validar::isValidaParaLinea(i, 0)) {
				mat->setLinea(i, 0);
				vec.remove(i, 0);
				return true;
			}
		}
		

	}//fin 3x3

	if (dynamic_cast<tabla_3x4*>(mat)) {

		//rectangulo interior
		if (validar::isLibre(mat, 2, 3) && validar::isValidaParaLinea(2, 3)) {
			mat->setLinea(2, 3);
			vec.remove(2, 3);
			return true;
		}
		if (validar::isLibre(mat, 3, 4) && validar::isValidaParaLinea(3, 4)) {
			mat->setLinea(3, 4);
			vec.remove(3, 4);
			return true;
		}
		if (validar::isLibre(mat, 5, 4) && validar::isValidaParaLinea(5, 4)) {
			mat->setLinea(5, 4);
			vec.remove(5, 4);
			return true;
		}
		if (validar::isLibre(mat, 6, 3) && validar::isValidaParaLinea(6, 3)) {
			mat->setLinea(6, 3);
			vec.remove(6, 3);
			return true;
		}
		if (validar::isLibre(mat, 5, 2) && validar::isValidaParaLinea(5, 2)) {
			mat->setLinea(5, 2);
			vec.remove(5, 2);
			return true;
		}
		if (validar::isLibre(mat, 3, 2) && validar::isValidaParaLinea(3, 2)) {
			mat->setLinea(3, 2);
			vec.remove(3, 2);
			return true;
		}

		//exterior(periferico)
		for (int i = 1;i <= 5; i += 2) { //fila arriba
			if (validar::isLibre(mat, 0, i) && validar::isValidaParaLinea(0, i)) {
				mat->setLinea(0, i);
				vec.remove(0, i);
				return true;
			}
		}
		for (int i = 1; i <= 7; i += 2) { //columna derecha
			if (validar::isLibre(mat, i, 6) && validar::isValidaParaLinea(i, 6)) {
				mat->setLinea(i, 6);
				vec.remove(i, 6);
				return true;
			}
		}
		for (int i = 1;i <= 5; i += 2) { //fila abajo
			if (validar::isLibre(mat, 6, i) && validar::isValidaParaLinea(6, i)) {
				mat->setLinea(6, i);
				vec.remove(6, i);
				return true;
			}
		}
		for (int i = 1; i <= 7; i += 2) { //columna izquierda
			if (validar::isLibre(mat, i, 0) && validar::isValidaParaLinea(i, 0)) {
				mat->setLinea(i, 0);
				vec.remove(i, 0);
				return true;
			}
		}
		

	}//fin 3x4

	if (dynamic_cast<tabla_3x5*>(mat)) {

		//rectangulo interior
		if (validar::isLibre(mat, 2, 3) && validar::isValidaParaLinea(2, 3)) { //arriba
			mat->setLinea(2, 3);
			vec.remove(2, 3);
			return true;
		}
		for (int i = 3;i <= 7;i += 2) { //columna der
			if (validar::isLibre(mat, i, 4) && validar::isValidaParaLinea(i, 4)) {
				mat->setLinea(i, 4);
				vec.remove(i, 4);
				return true;
			}
		}
		if (validar::isLibre(mat, 8, 3) && validar::isValidaParaLinea(8, 3)) { //abajo
			mat->setLinea(8, 3);
			vec.remove(8, 3);
			return true;
		}
		for (int i = 3;i <= 7;i += 2) { //columna izq
			if (validar::isLibre(mat, i, 2) && validar::isValidaParaLinea(i, 2)) {
				mat->setLinea(i, 2);
				vec.remove(i, 2);
				return true;
			}
		}

		//exterior(periferico)
		for (int i = 1;i <= 5; i += 2) { //fila arriba
			if (validar::isLibre(mat, 0, i) && validar::isValidaParaLinea(0, i)) {
				mat->setLinea(0, i);
				vec.remove(0, i);
				return true;
			}
		}
		for (int i = 1; i <= 9; i += 2) { //columna derecha
			if (validar::isLibre(mat, i, 6) && validar::isValidaParaLinea(i, 6)) {
				mat->setLinea(i, 6);
				vec.remove(i, 6);
				return true;
			}
		}
		for (int i = 1;i <= 5; i += 2) { //fila abajo
			if (validar::isLibre(mat, 6, i) && validar::isValidaParaLinea(6, i)) {
				mat->setLinea(6, i);
				vec.remove(6, i);
				return true;
			}
		}
		for (int i = 1; i <= 9; i += 2) { //columna izquierda
			if (validar::isLibre(mat, i, 0) && validar::isValidaParaLinea(i, 0)) {
				mat->setLinea(i, 0);
				vec.remove(i, 0);
				return true;
			}
		}
		
	}//fin 3x5


	srand((long)time(0));
	int x = (rand() % (vec.getCan() + 1));

	if (vec.getPosLibre(x) != nullptr) {
		mat->setLinea(vec.getPosLibre(x)->getFila(), vec.getPosLibre(x)->getCol());
		vec.remove(vec.getPosLibre(x)->getFila(), vec.getPosLibre(x)->getCol());
		return true;
	}

	return false;
}