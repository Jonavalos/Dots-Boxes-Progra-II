#include "vecPosicionesLibres.h"

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
