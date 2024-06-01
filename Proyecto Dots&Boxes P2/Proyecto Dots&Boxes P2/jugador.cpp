#include "jugador.h"

jugador::jugador(char u) : _usuario(u), _puntos(0) {
}

jugador::~jugador()
{
}

char jugador::getUsuario() {
	return _usuario;
}

void jugador::sumarPuntos() {
	_puntos++;
}

string jugador::toString() {
	stringstream s;

	s << "\tJugador " << _usuario << endl << endl;
	s << "Letra de usuario: " << _usuario << endl;
	s << "Puntos: " << _puntos << endl;

	return s.str();
}
