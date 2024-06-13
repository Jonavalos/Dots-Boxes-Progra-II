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

