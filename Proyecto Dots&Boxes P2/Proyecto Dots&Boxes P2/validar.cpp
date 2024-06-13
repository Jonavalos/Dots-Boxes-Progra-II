#include "validar.h"
#include "tabla_3x3.h"
#include "tabla_3x4.h"
#include "tabla_3x5.h"
#include "jugador.h"
#include "jugada.h"
bool validar::isLibre(tabla* mat, int fil, int col)
{
	if (mat->getValor(fil, col) == '-'
		|| mat->getValor(fil, col) == '|'
		|| mat->getValor(fil, col) == '+') {
		return false;
	}
	if (mat->getValor(fil, col) <= 122 && mat->getValor(fil, col) >= 65) {
		return false;
	}
	if (mat->getValor(fil, col) == 'A') {
		return false;
	}
	if (mat->getValor(fil, col) == 'B') {
		return false;
	}
	if (mat->getValor(fil, col) == 32) {
		return true;
	}
	return false;
}

bool validar::isValidaParaLinea(int fil, int col)
{
	//no usar metodo solo, siempre acompanarlo de otras validaciones
	//pues no verifica limites ni si esta ocupada

	if (fil % 2 != 0 && fil!=0) { //fila impar
		if (col % 2 != 0 && col!=0) { //columna impar
			return false; // para fil sea impar, col tiene que ser par
		}
	}

	//si no se cumple, o sea fila par
	//da igual que la columna sea par o impar
	return true;

}

bool validar::isFueraLimites(tabla* mat, int fil, int col)
{
	if (mat == nullptr) {
		throw new exception;
	}

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

bool validar::completarLetras(tabla* mat, jugador& p)
{
	if (mat == nullptr) {
		throw new exception;
	}

	if (dynamic_cast<tabla_3x3*>(mat)) {
		for (int i = 0; i < 7; i++) {
			for (int j = 1; j < 7; j++) {
				if (isCasillaRodeada(mat, i, j)) {
					if (mat->setLetra(i, j, p.getUsuario())) {
						p.sumarPuntos();
					}				
				}
			}
		}
		return true;
	}
	if (dynamic_cast<tabla_3x4*>(mat)) {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 7; j++) {
				if (isCasillaRodeada(mat, i, j)) {
					if (mat->setLetra(i, j, p.getUsuario())) {
						p.sumarPuntos();
					}
				}
			}
		}
		return true;
	}
	if (dynamic_cast<tabla_3x5*>(mat)) {
		for (int i = 0; i < 11; i++) {
			for (int j = 0; j < 7; j++) {
				if (isCasillaRodeada(mat, i, j)) {
					if (mat->setLetra(i, j, p.getUsuario())) {
						p.sumarPuntos();
					}
				}
			}
		}
		return true;
	}
	return false;
}

bool validar::isCerca(jugada* ultimaJugada, int i,  int j) {

	if ((ultimaJugada->getFila() - i <= 2 && ultimaJugada->getFila() - i >= 0) || (i - ultimaJugada->getFila() <= 2 && i - ultimaJugada->getFila() >= 0)) {
		if ((j - ultimaJugada->getCol() <= 1 && j - ultimaJugada->getCol() >= 0) || (ultimaJugada->getCol() - j <= 1 && ultimaJugada->getCol() - j >= 0)) {
			return true;
		}
	}
	else {
		return false;
	}
}
