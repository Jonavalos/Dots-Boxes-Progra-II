#include "validar.h"
#include "tabla_3x3.h"
#include "tabla_3x4.h"
#include "tabla_3x5.h"
bool validar::isLibre(tabla* mat, int fil, int col)
{
	if (mat->getValor(fil, col) == '-'
		|| mat->getValor(fil, col) == '|'
		|| mat->getValor(fil, col) == '+') {
		return false;
	}
	if (mat->getValor(fil, col) == 32) {
		return true;
	}
	return false;
}

bool validar::isFueraLimites(tabla* mat, int fil, int col)
{

	if (dynamic_cast<tabla_3x3*>(mat)) {
		if (fil < 7 && col < 7 && fil >= 0 && col >= 0) {
			return false;
		}
	}
	if (dynamic_cast<tabla_3x4*>(mat)) {
		if (fil < 9 && col < 7 && fil >= 0 && col >= 0) {
			return false;
		}
	}
	if (dynamic_cast<tabla_3x5*>(mat)) {
		if (fil < 11 && col < 7 && fil >= 0 && col >= 0) {
			return false;
		}
	}

	if (mat == nullptr) {
		return new exception;
	}

	return true;
}

bool validar::isCasillaRodeada(tabla* mat, int i, int j)
{
	if (!validar::isFueraLimites(mat, i - 1, j) && !validar::isLibre(mat, i - 1, j) && //arriba
		!validar::isFueraLimites(mat, i, j - 1) && !validar::isLibre(mat, i, j - 1) && //izq
		!validar::isFueraLimites(mat, i, j + 1) && !validar::isLibre(mat, i, j + 1) && //der
		!validar::isFueraLimites(mat, i + 1, j) && !validar::isLibre(mat, i + 1, j) //arriba
		) {
		return true;
	}
	return false;
}
