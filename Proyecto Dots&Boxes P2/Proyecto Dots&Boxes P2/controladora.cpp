#include "controladora.h"

controladora::controladora() {
	_vec = new vecTablas();
}

controladora::controladora(vecTablas* vec) {
	_vec = vec;
}

controladora::~controladora() {
	if (_vec != nullptr) {
		delete _vec;
	}
}

int controladora::controlMenu() {
	return juego::menuJuego();
}

void controladora::control0() {
	int op1;

	do {
		op1 = controlMenu();
		switch (op1) {
		case 1:
			juego::mostrarVecTablas(_vec); break;
		case 2:
		default: break;
		}
	} while (op1 != 3);
}
