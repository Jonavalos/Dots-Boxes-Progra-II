#include "tabla_3x4.h"

tabla_3x4::tabla_3x4() {
	_filas = 9;
	_columnas = 7;

	_tabla = new char* [_filas];
	for (int i = 0; i < _filas; i++) {
		_tabla[i] = new char[_columnas];
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

tabla_3x4::~tabla_3x4() {
	for (int i = 0; i < _filas; i++) {
		delete[] _tabla[i];
	}

	delete[] _tabla;
}

void tabla_3x4::setLinea(int fila, int col) {
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

string tabla_3x4::toString() {
	stringstream s;
	int cont = 0;

	//para los �ndices de la parte de arriba
	s << setw(4) << "0";
	for (int i = 0; i < 3; i++) {
		s << setw(6) << i + 1;
	}
	s << endl << endl;

	for (int i = 0; i < _filas; i++) {
		if (i % 2 == 0) {
			s << cont << "  "; cont++;
		}
		else {
			s << "   ";
		}
		for (int j = 0; j < _columnas; j++) {
			s << _tabla[i][j] << "  ";
		}
		s << endl;
	}

	return s.str();
}