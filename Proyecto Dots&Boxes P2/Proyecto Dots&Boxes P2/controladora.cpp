#include "controladora.h"
#include "ansi_term.h"

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
	int op1, op2;

	do {
		op1 = controlMenu();
		cout << ansi_term::home();
		cout << ansi_term::clear();
		switch (op1) {
		case 1: control1(); break;
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

void controladora::control1() {
	juego::jugadorVsJugador(_vec);
}

int controladora::control2() {
	return juego::menuVsCompu();
}

void controladora::control2_1() {
	juego::jugadorVsCompuAl(_vec);
}

void controladora::control2_2()
{
}

void controladora::control2_3()
{
}

void controladora::control2_4()
{
}

void controladora::control2_5()
{
}
