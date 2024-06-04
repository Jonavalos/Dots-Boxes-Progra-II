#include "tablaPrincipal.h"

tablaPrincipal::tablaPrincipal()
{
	_filas = 20;
	_columnas = 20;

	_tabla = new char* [_filas];
	for (int i = 0; i < _filas; i++) {
		_tabla[i] = new char[_filas];
		for (int j = 0; j < _columnas; j++) {
			_tabla[i][j] = char(' ');
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
}

tablaPrincipal::~tablaPrincipal()
{
	delete[] _tabla;
}

bool tablaPrincipal::agregar(tabla* tab)
{
	int x = 0, y = 0;
	if (_tabla[0][0] == 32) {

		if (dynamic_cast<tabla_3x3*>(tab)) {
			for (int i = 0; i < 7; i++) {
				for (int j = 0; j < 7; j++) {
					_tabla[i][j] = char('+');
					if (j % 2 != 0) { _tabla[i][j] = char(' '); }
					if (i % 2 != 0) { _tabla[i][j] = char(' '); }
				}
			}
		}
		if (dynamic_cast<tabla_3x4*>(tab)) {

		}
		if (dynamic_cast<tabla_3x5*>(tab)) {

		}
	}
	if (dynamic_cast<tabla_3x3*>(tab)) {
		for (int i = 0; i < _filas; i++) {
			for (int j = 0; j < _columnas; j++) {
				if (i + 7 < 20 && j + 7 < 20) { //limite
					if (isLibreBin(i, j, i+6, j+6)) { //esta libre
						for (int p = i; p < i+7; p++) {
							for (int q = j; q < j+7; q++) {
								_tabla[p][q] = char('+');
								if (q % 2 != 0) { _tabla[p][q] = char(' '); }
								if (p % 2 != 0) { _tabla[p][q] = char(' '); }
							}
						}
						return true;
					}
					
				}
				


			}
		}
	}
	

	return false;
}

string tablaPrincipal::toString()
{
	stringstream s;
	for (int i = 0; i < _filas; i++) {
		for (int j = 0; j < _columnas; j++) {
			s << _tabla[i][j] << "  ";
		}
		s << '\n';
	}
	return s.str();
}

void tablaPrincipal::actualizarTabBinaria()
{
	for (int i = 0; i < _filas; i++) {
		for (int j = 0; j < _columnas; j++) {
			if (_tabla[i][j] == 32) {
				_tablaBin[i][j] = 1;
			}
			else {
				_tablaBin[i][j] = 0;
			}
		}
	}
}

bool tablaPrincipal::isLibreBin(int x, int y, int f, int c)
{
	for (int i = x; i < f; i++) {
		for (int j = y; j < c; j++) {
			if (_tablaBin[i][j] == 0)
				return false;
		}
	}
	return true;
}

string tablaPrincipal::toStringBin()
{
	stringstream s;
	for (int i = 0; i < _filas; i++) {
		for (int j = 0; j < _columnas; j++) {
			s << _tablaBin[i][j] << "   ";
		}
		s << '\n';
	}
	return s.str();
}
