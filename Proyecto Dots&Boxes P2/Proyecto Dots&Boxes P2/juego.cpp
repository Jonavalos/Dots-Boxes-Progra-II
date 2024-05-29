#include "juego.h"

int juego::menuJuego() {
	int op;

	cout << "\tSeleccione el modo de juego" << endl;
	cout << "1. Jugador contra jugador. " << endl;
	cout << "2. Jugador contra computador. " << endl;
	cout << "3. SALIR." << endl;
	cin >> op;

	return op;
}

void juego::mostrarVecTablas(vecTablas* vec) {
	int op, x, y;

	cout << *vec << endl << endl;
	cout << "Ingrese la posición de la tabla con la que desea jugar: "; cin >> op;
	tabla* tabla1 = vec->getTabla(op);

	while (!tabla1->lleno()) {
		// Jugador A
		do {
			cout << tabla1->toString() << endl;
			cout << "Jugador A: " << endl;
			cout << "Fila: "; cin >> x;
			cout << "Columna: "; cin >> y;
		} while (!validar::isLibre(tabla1, x, y));
		tabla1->setLinea(x, y);
		//validar::completarLetras(tabla1, jugador1) AQUI VA CUANDO SE PUEDA
		if (tabla1->lleno()) break;

		// Jugador B
		do {
			cout << tabla1->toString() << endl;
			cout << "Jugador B: " << endl;
			cout << "Fila: "; cin >> x;
			cout << "Columna: "; cin >> y;
		} while (!validar::isLibre(tabla1, x, y));
		tabla1->setLinea(x, y);
		//validar::completarLetras(tabla1, jugador2) AQUI VA CUANDO SE PUEDA
	}

	cout << *tabla1;
}