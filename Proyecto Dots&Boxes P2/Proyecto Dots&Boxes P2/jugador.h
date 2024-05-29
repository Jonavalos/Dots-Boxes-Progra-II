#pragma once
#include "bibliotecas.h"

class jugador {
public:
	jugador(char);
	virtual ~jugador();

	char getUsuario();

private:
	char _usuario;
	
};

