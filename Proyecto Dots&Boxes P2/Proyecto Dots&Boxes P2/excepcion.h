#pragma once
#include "bibliotecas.h"

class excepcion: public exception
{
	//virtual string what() = 0;

};

class excepcionOcupado : public excepcion {


};

class excepcionFueraLimites : public excepcion {

};

class excepcionInvalidoParaLinea : public excepcion {

};