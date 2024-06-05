#include "jugada.h"

jugada::jugada(int fila, int columna) : _fila(fila), _columna(columna) {

}

jugada::~jugada()
{
}

int jugada::getFila()
{
	return _fila;
}

int jugada::getCol()
{
	return _columna;
}
