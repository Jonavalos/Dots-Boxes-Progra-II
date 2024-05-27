#include "tabla_3x3.h"

tabla_3x3::tabla_3x3() {
	_filas = 7;
	_columnas = 7;

	_tabla = new char* [_filas];
	for (int i = 0; i < _filas; i++) {
		_tabla[i] = new char[_filas];
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

	//
	_tablaBin = new bool* [_filas];
	for (int i = 0; i < _filas; i++) {
		_tablaBin[i] = new bool[_filas];
		for (int j = 0; j < _columnas; j++) {
			_tablaBin[i][j] = 0;
		}
	}
	actualizarTabBinaria();
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

string tabla_3x3::toString() const {
	stringstream s;
	int cont = 0;

	//para los índices de la parte de arriba
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

void tabla_3x3::actualizarTabBinaria()
{
	for (int i = 0; i < _filas; i++) {
		for (int j = 0; j < _columnas; j++) {
			if (_tabla[i][j] == ' ') {
				_tablaBin[i][j] = 1;
			}
			if (_tabla[i][j] == '-' || _tabla[i][j] == '|' || _tabla[i][j] == '+') {
				_tablaBin[i][j] = 0;
			}
		}
	}

}

string tabla_3x3::toStringBin()
{
	stringstream s;
	for (int i = 0; i < _filas; i++) {
		for (int j = 0; j < _columnas; j++) {
			s <<_tablaBin[i][j]<<"   ";
		}
		s << '\n';
	}
	return s.str();
}

string tabla_3x3::toStringSimple()
{
	stringstream s;
	for (int i = 0; i < _filas; i++) {
		for (int j = 0; j < _columnas; j++) {
			s << _tabla[i][j] << "   ";
		}
		s << '\n';
	}
	return s.str();
}


