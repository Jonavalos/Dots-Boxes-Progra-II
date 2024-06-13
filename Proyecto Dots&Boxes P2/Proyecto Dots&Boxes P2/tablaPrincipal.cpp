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
	_tablaBin2 = new bool* [_filas];
	for (int i = 0; i < _filas; i++) {
		_tablaBin2[i] = new bool[_filas];
		for (int j = 0; j < _columnas; j++) {
			_tablaBin2[i][j] = 0;
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
					if (j % 2 != 0) { 
						_tabla[i][j] = char(' ');
						_tablaBin[i][j] = 1;
					}
					if (i % 2 != 0) { 
						_tabla[i][j] = char(' ');
						_tablaBin[i][j] = 1;
					}
				}
			}
			return true;
		}
		if (dynamic_cast<tabla_3x4*>(tab)) {
			for (int i = 0; i < 9; i++) {
				for (int j = 0; j < 7; j++) {
					_tabla[i][j] = char('+');
					if (j % 2 != 0) {
						_tabla[i][j] = char(' ');
						_tablaBin[i][j] = 1;
					}
					if (i % 2 != 0) {
						_tabla[i][j] = char(' ');
						_tablaBin[i][j] = 1;
					}
				}
			}
			return true;
		}
		if (dynamic_cast<tabla_3x5*>(tab)) {
			for (int i = 0; i < 11; i++) {
				for (int j = 0; j < 7; j++) {
					_tabla[i][j] = char('+');
					if (j % 2 != 0) {
						_tabla[i][j] = char(' ');
						_tablaBin[i][j] = 1;
					}
					if (i % 2 != 0) {
						_tabla[i][j] = char(' ');
						_tablaBin[i][j] = 1;
					}
				}
			}
			return true;
		}
	}
	if (dynamic_cast<tabla_3x3*>(tab)) {
		for (int i = 0; i < _filas; i++) {
			for (int j = 0; j < _columnas; j++) {
				if (i + 7 < 20 && j + 7 < 20) { //limite
					if (isLibreBin2(i, j, i+6, j+6)) { //esta libre
						for (int p = i; p < i+7; p++) {
							for (int q = j; q < j+7; q++) {
								_tabla[p][q] = char('+');
								if (q % 2 != 0) { 
									_tabla[p][q] = char(' '); 
									_tablaBin[p][q] = 1; 
								}
								if (p % 2 != 0) { 
									_tabla[p][q] = char(' '); 
									_tablaBin[p][q] = 1; 
									_tablaBin[p][q] = 1; 
								}
							}
						}
						return true;
					}
					
				}
				


			}
		}
	}
	if (dynamic_cast<tabla_3x4*>(tab)) {
		for (int i = 0; i < _filas; i++) {
			for (int j = 0; j < _columnas; j++) {
				if (i + 9 < 20 && j + 7 < 20) { //limite
					if (isLibreBin2(i, j, i + 8, j + 6)) { //esta libre
						for (int p = i; p < i + 9; p++) {//rellenar
							for (int q = j; q < j + 7; q++) {
								_tabla[p][q] = char('+');
								if (q % 2 != 0) { 
									_tabla[p][q] = char(' '); 
									_tablaBin[p][q] = 1; 
								}
								if (p % 2 != 0) { 
									_tabla[p][q] = char(' '); 
									_tablaBin[p][q] = 1; 
								}
							}
						}
						return true;
					}

				}



			}
		}
	}
	if (dynamic_cast<tabla_3x5*>(tab)) {
		for (int i = 0; i < _filas; i++) {
			for (int j = 0; j < _columnas; j++) {
				if (i + 11 < 20 && j + 7 < 20) { //limite
					if (isLibreBin2(i, j, i + 10, j + 6)) { //esta libre
						for (int p = i; p < i + 11; p++) {//rellenar
							for (int q = j; q < j + 7; q++) {
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

bool tablaPrincipal::setLinea(int fila, int col) {
	if (validarLinea(fila, col)) {
		if (fila % 2 == 0 && col % 2 != 0) {
			_tabla[fila][col] = char('-');
			return true;
		}
		if (fila % 2 != 0 && col % 2 == 0) {
			_tabla[fila][col] = char('|');
			return true;
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}

bool tablaPrincipal::validarLinea(int i, int j) {
	if (_tablaBin2[i][j] == 1 && _tablaBin[i][j] != 0) {
		return true;
	}
	if (_tabla[i][j] == 'A' || _tabla[i][j] == 'B') {
		return false;
	}
	else {
		return false;
	}
}

bool tablaPrincipal::lleno() {
	for (int i = 0; i < _filas; i++) {
		for (int j = 0; j < _columnas; j++) {
			if (_tabla[i][j] == 32 && _tablaBin2[i][j] == 1) {
				return false;
			}
		}
	}

	return true;
}

bool tablaPrincipal::completarLetras(jugador* p) {
	for (int i = 0; i < _filas; i++) {
		for (int j = 1; j < _columnas; j++) {
			if (isCasillaRodeada(i, j)) {
				if (setLetra(i, j, p->getUsuario())) {
					p->sumarPuntos();
				}
			}
		}
	}
	return true;
}

bool tablaPrincipal::isLibre(int fil, int col) {
	
	if (_tabla[fil][col] == '-' || _tabla[fil][col] == '|' || _tabla[fil][col] == '+') {
		return false;
	}
	if (_tabla[fil][col] == 'A' || _tabla[fil][col] == 'B') {
		return false;
	}
	if (_tabla[fil][col] == 32) {
		return true;
	}
	return false;
}

bool tablaPrincipal::isCasillaRodeada(int i, int j) {
	if ((!isLibre(i - 1, j)) && (!isLibre(i, j - 1)) && (!isLibre(i, j + 1)) && (!isLibre(i + 1, j))) {
		return true;
	}
	return false;
}

bool tablaPrincipal::setLetra(int fil, int col, char letra) {
	if (isLibre(fil, col)) {
		_tabla[fil][col] = letra;
		return true;
	}
	return false;
}

string tablaPrincipal::toString()
{
	stringstream s;
	int cont = 0;

	//para los índices de la parte de arriba
	s << setw(4) << "0";
	for (int i = 0; i < 19; i++) {
		s << setw(3) << i + 1;
	}
	s << endl << endl;

	for (int i = 0; i < _filas; i++) {
		//if () {
		s << cont << "  "; cont++;
		//}
		//else {
		//	s << "   ";
		//}
		for (int j = 0; j < _columnas; j++) {
			s << _tabla[i][j] << "  ";
		}
		s << endl;
	}

	return s.str();
}

void tablaPrincipal::actualizarTabBin2()
{
	for (int i = 0; i < _filas; i++) {
		for (int j = 0; j < _columnas; j++) {
			if (_tabla[i][j] == 32) {
				_tablaBin2[i][j] = 1;
			}
			else {
				_tablaBin2[i][j] = 0;
			}
		}
	}
}

bool tablaPrincipal::isLibreBin2(int x, int y, int f, int c)
{
	for (int i = x; i < f; i++) {
		for (int j = y; j < c; j++) {
			if (_tablaBin2[i][j] == 0)
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
			s << _tablaBin2[i][j] << "   ";
		}
		s << '\n';
	}
	return s.str();
}
