#include "vecPosicionesLibres.h"
#include "tabla_3x3.h"
#include "tabla_3x4.h"
#include "tabla_3x5.h"

vecPosicionesLibres::vecPosicionesLibres() {
	_can = 0;
	_tam = 77;	//77 porque es el máximo del tablero más grande(3x5)
	_vec = new posicionLibre * [_tam];

	for (int i = 0; i < _tam; i++) {
		_vec[i] = nullptr;
	}
}

vecPosicionesLibres::~vecPosicionesLibres() {
	for (int i = 0; i < _can; i++) {
		delete _vec[i];
	}
	delete[] _vec;
}

void vecPosicionesLibres::llenar(tabla* mat)
{
	int fil = 7;
	if (mat == nullptr) { throw new exception; }
	if (dynamic_cast<tabla_3x3*>(mat)) { fil = 7; }
	if (dynamic_cast<tabla_3x4*>(mat)) { fil = 9; }
	if (dynamic_cast<tabla_3x5*>(mat)) { fil = 11; }

	for (int i = 0; i < fil; i++) {
		for (int j = 0; j < 7; j++) {
			if (validar::isLibre(mat, i, j) && validar::isValidaParaLinea(i, j)) {
				this->add(i, j);
			}
		}
	}
}

int vecPosicionesLibres::getCan() {
	return _can;
}

bool vecPosicionesLibres::add(int fila, int col) {
	posicionLibre* pos = new posicionLibre(fila, col);

	if (_can < _tam) {
		_vec[_can++] = pos;
		return true;
	}
	else {
		return false;
	}
}

void vecPosicionesLibres::remove(int fila, int col) {
	if (_can != 0) {
		for (int i = 0; i < _can; i++) {
			if (_vec[i]->getFila() == fila && _vec[i]->getCol() == col) {
				delete _vec[i];
				for (int j = i; j < _can; j++) {
					_vec[j] = _vec[j + 1];
				}
				_can--;
			}
		}
	}
}

posicionLibre* vecPosicionesLibres::getPosLibre(int i) {
	return _vec[i];
}
