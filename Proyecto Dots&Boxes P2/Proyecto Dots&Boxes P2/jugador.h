#pragma once
#include "bibliotecas.h"

class jugador {
public:
	jugador(char);
	virtual ~jugador();

	char getUsuario();
	void sumarPuntos();

	virtual string toString();

private:
	char _usuario;
	int _puntos;
	
};

