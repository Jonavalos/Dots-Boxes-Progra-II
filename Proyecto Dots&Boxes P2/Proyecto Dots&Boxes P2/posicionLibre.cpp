#include "posicionLibre.h"

posicionLibre::posicionLibre() : _fila(0), _columna(0) {

}

posicionLibre::posicionLibre(int fila, int col) : _fila(fila), _columna(col) {

}

int posicionLibre::getFila() {
	return _fila;
}

int posicionLibre::getCol() {
	return _columna;
}