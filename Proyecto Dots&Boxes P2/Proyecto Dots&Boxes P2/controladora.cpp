#include "controladora.h"
#include "ansi_term.h"

controladora::controladora() {
	_vec = new vecTablas();
	_principal = new tablaPrincipal();
}

controladora::controladora(vecTablas* vec, tablaPrincipal* principal) {
	_vec = vec;
	_principal = principal;
}

controladora::~controladora() {
	if (_vec != nullptr) {
		delete _vec;
	}
	if (_principal != nullptr) {
		delete _principal;
	}
}

int controladora::controlMenu() {
	return juego::menuJuego();
}

void controladora::control0() {
	int op1, op2, op3;

	do {
		op1 = controlMenu();
		cout << ansi_term::home();
		cout << ansi_term::clear();
		switch (op1) {
		case 1: 
			do {
				op3 = control1();

				switch (op3) {
				case 1: control1_1(); break;
				case 2: control1_2(); break;
				default: break;
				}
			} while (op3 != 3);
			break;
		case 2:
			do {
				op2 = control2();

				switch (op2) {
				case 1: control2_1(); break;
				case 2: control2_2(); break;
				case 3: control2_3(); break;
				case 4: control2_4(); break;
				case 5: control2_5(); break;
				default: break;
				}
			} while (op2 != 6);
			break;	//case 2
		default: break;
		}
	} while (op1 != 3);
}

int controladora::control1() {
	return juego::menuTablero();
}

void controladora::control1_1() {
	juego::jugadorVsJugador(_vec);
}

void controladora::control1_2() {
	juego::jugVsJugIrregular(_vec, _principal);
}

int controladora::control2() {
	return juego::menuVsCompu();
}

void controladora::control2_1() {
	juego::jugadorVsCompuAl(_vec);
}

void controladora::control2_2() {
	juego::jugadorVsCompuCer(_vec);
}

void controladora::control2_3() {
	juego::jugadorVsCompuPeri(_vec);
}

void controladora::control2_4() {
	juego::jugadorVsCompuCen(_vec);
}

void controladora::control2_5() {
	juego::jugadorVsCompuIslas(_vec);
}
