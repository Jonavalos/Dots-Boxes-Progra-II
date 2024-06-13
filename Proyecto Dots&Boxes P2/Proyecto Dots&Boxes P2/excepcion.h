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