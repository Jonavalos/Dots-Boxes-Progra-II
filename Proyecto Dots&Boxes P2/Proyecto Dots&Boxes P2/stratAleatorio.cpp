#include "stratAleatorio.h"

void stratAleatorio::strat(tabla* mat, vecPosicionesLibres& vec) {
	int fil = 7;
	//vecPosicionesLibres vec;

	srand((long)time(0));
	int x = (rand() % (vec.getCan() + 1));
	do {
		if (vec.getPosLibre(x) != nullptr) {
			mat->setLinea(vec.getPosLibre(x)->getFila(), vec.getPosLibre(x)->getCol());
			vec.remove(vec.getPosLibre(x)->getFila(), vec.getPosLibre(x)->getCol());
		}
	} while (vec.getPosLibre(x) == nullptr);
	//triple verificacion xd
}