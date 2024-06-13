/* -------------------------------------------------------------------+
* |
* (c) 2024 |
* 1-1921-0044 - JiaYu Wu Liang |
* 1-1892-0119 - Jonathan Avalos Montero |
* version 1.0.0 2024-06-13 |
* |
* -------------------------------------------------------------------+
*/

#pragma once
#include "bibliotecas.h"

class excepcion: public exception
{
	const char* what() const = 0;

};

class excepcionOcupado : public excepcion {

	const char* what() const {
		return "Error: casilla ocupada! ";
	}

};

class excepcionFueraLimites : public excepcion {

	const char* what() const {
		return "Error: casilla fuera de limites! ";
	}

};

class excepcionInvalidoParaLinea : public excepcion {

	const char* what() const {
		return "Error: casilla invalida para linea! ";
	}

};