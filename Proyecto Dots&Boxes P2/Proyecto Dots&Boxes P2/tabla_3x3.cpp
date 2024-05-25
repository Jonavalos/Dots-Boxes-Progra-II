#include "tabla_3x3.h"

tabla_3x3::tabla_3x3() {
	_filas = 7;
	_columnas = 7;

	_tabla = new char* [_filas];
	for (int i = 0; i < _filas; i++) {
		_tabla[i] = new char[7];
		for (int j = 0; j < _columnas; j++) {
			_tabla[i][j] = char('+');
		}
	}

	for (int i = 0; i < _filas; i++) {
		for (int j = 0; j < _columnas; j++) {
			if (j % 2 != 0) { _tabla[i][j] = char(' '); }
			if (i % 2 != 0) { _tabla[i][j] = char(' '); }
		}
	}
}

tabla_3x3::~tabla_3x3() {
	for (int i = 0; i < _filas; i++) {
		delete[] _tabla[i];
	}

	delete[] _tabla;
}

void tabla_3x3::setLinea(int fila, int col) {
	if (fila % 2 == 0 && col % 2 != 0) {
		_tabla[fila][col] = char('-');
	}
	if (fila % 2 != 0 && col % 2 == 0) {
		_tabla[fila][col] = char('|');
	}
	else {
		cout << " " << endl;
	}
}

string tabla_3x3::toString() {
	stringstream s;

	for (int i = 0; i < _filas; i++) {
		for (int j = 0; j < _columnas; j++) {
			s << _tabla[i][j] << "  ";
		}
		s << endl;
	}

	return s.str();
}
