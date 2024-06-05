#include "stratCercano.h"

void stratCercano::strat(tabla* mat, vecPosicionesLibres& vec) {
	//int cont = 0;

	//vec.llenarOcupadas(mat);
	//int filaPosLibre = vec.getPosLibre(cont)->getFila();
	//int colPosLibre = vec.getPosLibre(cont)->getCol();
	//for (int i = 0; i < mat->getFila(); i++) {
	//	for (int j = 0; j < 7; j++) {
	//		if (validar::isLibre(mat, i, j) && vec.getPosLibre(cont) != nullptr) {
	//			if ((filaPosLibre - i <= 2 && filaPosLibre - i >= 0) || (i - filaPosLibre <= 2 && i - filaPosLibre >= 0)) {	//minimo de cercanía || maximo de carcanía (filas)
	//				if ((j - colPosLibre <= 2 && j - colPosLibre >= 0) || (colPosLibre - j <= 2 && colPosLibre - j >= 0)) {	//maximo de cercanía || minimo de carcanía (columnas)
	//					mat->setLinea(i, j);
	//					vec.remove(i, j);
	//				}
	//			}
	//		}
	//	}
	//}

	int cont = 0;
	bool salir = false;

	vec.llenarOcupadas(mat);
	int filaPosLibre = vec.getPosLibre(cont)->getFila();
	int colPosLibre = vec.getPosLibre(cont)->getCol();

	for (int i = 0; i < mat->getFila() && !salir; i++) {
		for (int j = 0; j < 7; j++) {
			if (validar::isLibre(mat, i, j) && vec.getPosLibre(cont) != nullptr) {
				if ((filaPosLibre - i <= 2 && filaPosLibre - i >= 0) || (i - filaPosLibre <= 2 && i - filaPosLibre >= 0)) { //minimo de cercanía || maximo de carcanía (filas)
					if ((j - colPosLibre <= 2 && j - colPosLibre >= 0) || (colPosLibre - j <= 2 && colPosLibre - j >= 0)) {  //maximo de cercanía || minimo de carcanía (columnas)
						mat->setLinea(i, j);
						vec.remove(i, j);
						salir = true;
						break;
					}
				}
			}
		}
		if (salir) {
			break;
		}
	}
}