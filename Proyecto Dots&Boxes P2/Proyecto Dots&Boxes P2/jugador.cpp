#include "jugador.h"

jugador::jugador(char u) : _usuario(u) {
}

jugador::~jugador()
{
}

char jugador::getUsuario() {
	return _usuario;
}
