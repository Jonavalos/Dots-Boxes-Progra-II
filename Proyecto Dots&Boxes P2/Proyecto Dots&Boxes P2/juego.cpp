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

int juego::menuTablero() {
	int op;

	cout << "\tSeleccione el tipo de tablero" << endl;
	cout << "1. Regular. " << endl;
	cout << "2. Irregular. " << endl;
	cout << "3. SALIR." << endl;
	cin >> op;

	return op;
}

tablaPrincipal* juego::crearTableroIrregular(vecTablas* vec, tablaPrincipal* tablaP) {
	int op;
	
	cout << "\tCreacion del tablero irregular" << endl << endl;
	do {
		cout << vec->toString() << endl;
		cout << "Ingrese la posición de la tabla que desea agregar: "; cin >> op;

		if (op >= 0 && op <= vec->getCan()) {
			if (tablaP->agregar(vec->getTabla(op))) {
				cout << "Tabla agregada correctamente." << endl;
				tablaP->actualizarTabBin2();
				
			}
			else {
				cout << "No hay mas espacio." << endl;			
				break;
			}
		}
		else {
			cout << "Posición inválida. Intente nuevamente." << endl;
		}
	} while (op <= vec->getCan() || op >= 0);

	return tablaP;
}

//void juego::jugVsJugIrregular(vecTablas* vec, tablaPrincipal* princi) {
//	int op, x, y;
//	jugador* jugador1 = new jugador('A');
//	jugador* jugador2 = new jugador('B');
//
//	crearTableroIrregular(vec, princi);
//	tabla* tabla1 = vec->getTabla(op);
//
//	while (!tabla1->lleno()) {
//		// Jugador A
//		do {
//			cout << tabla1->toString() << endl;
//			cout << "Jugador A: " << endl;
//			cout << "Fila: "; cin >> x;
//			cout << "Columna: "; cin >> y;
//		} while (!validar::isLibre(tabla1, x, y));
//		tabla1->setLinea(x, y);
//		validar::completarLetras(tabla1, *jugador1); //AQUI VA CUANDO SE PUEDA
//		if (tabla1->lleno()) break;
//
//		// Jugador B
//		do {
//			cout << tabla1->toString() << endl;
//			cout << "Jugador B: " << endl;
//			cout << "Fila: "; cin >> x;
//			cout << "Columna: "; cin >> y;
//		} while (!validar::isLibre(tabla1, x, y));
//		tabla1->setLinea(x, y);
//		validar::completarLetras(tabla1, *jugador2); //AQUI VA CUANDO SE PUEDA
//	}
//
//	cout << *tabla1;
//	cout << jugador1->toString() << endl;
//	cout << jugador2->toString() << endl;
//}

void juego::jugadorVsJugador(vecTablas* vec) {
	int op, x, y;
	jugador* jugador1 = new jugador('A');
	jugador* jugador2 = new jugador('B');

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
		validar::completarLetras(tabla1, *jugador1); //AQUI VA CUANDO SE PUEDA
		if (tabla1->lleno()) break;

		// Jugador B
		do {
			cout << tabla1->toString() << endl;
			cout << "Jugador B: " << endl;
			cout << "Fila: "; cin >> x;
			cout << "Columna: "; cin >> y;
		} while (!validar::isLibre(tabla1, x, y));
		tabla1->setLinea(x, y);
		validar::completarLetras(tabla1, *jugador2); //AQUI VA CUANDO SE PUEDA
	}

	cout << *tabla1;
	cout << jugador1->toString() << endl;
	cout << jugador2->toString() << endl;
}

int juego::menuVsCompu() {
	int op;

	cout << "\tSeleccione la estrategia" << endl;
	cout << "1. Aleatorio. " << endl;
	cout << "2. Cercano. " << endl;
	cout << "3. Periferico. " << endl;
	cout << "4. Central. " << endl;
	cout << "5. Por islas. " << endl;
	cout << "6. SALIR." << endl;
	cin >> op;

	return op;
}

void juego::jugadorVsCompuAl(vecTablas* vec) {
	int op, x, y;
	jugador* jugador1 = new jugador('A');
	jugador* jugador2 = new jugador('B');
	jugadorStrat* strat = new jugadorStrat();
	estrategia* random = new stratAleatorio();
	vecPosicionesLibres* vecPosLib = new vecPosicionesLibres;
	cout << *vec << endl << endl;
	cout << "Ingrese la posición de la tabla con la que desea jugar: "; cin >> op;
	tabla* tabla1 = vec->getTabla(op);
	vecPosLib->llenar(tabla1);

	strat->setStrat(random);
	while (!tabla1->lleno()) {

		// Jugador A
		do {
			cout << tabla1->toString() << endl;
			cout << "Jugador A: " << endl;
			cout << "Fila: "; cin >> x;
			cout << "Columna: "; cin >> y;
		} while (!validar::isValidaParaLinea(x, y) || !validar::isLibre(tabla1, x, y));
		tabla1->setLinea(x, y);
		vecPosLib->remove(x, y);
		validar::completarLetras(tabla1, *jugador1);
		cout << tabla1->toString() << endl;
		if (tabla1->lleno()) break;

		// Compu
		cout << "Computadora: " << endl;
		strat->runStrat(tabla1, *vecPosLib);
		validar::completarLetras(tabla1, *jugador2);
		cout << tabla1->toString() << endl;
	}

	cout << *tabla1;
	cout << jugador1->toString() << endl;
	cout << jugador2->toString() << endl;
}

void juego::jugadorVsCompuCer(vecTablas* vec) {
	int op, x, y;
	jugador* jugador1 = new jugador('A');
	jugador* jugador2 = new jugador('B');
	jugadorStrat* strat = new jugadorStrat();
	jugadorStrat* stratAleat = new jugadorStrat();
	estrategia* cercano = new stratCercano();
	estrategia* aleatorio = new stratAleatorio();
	vecPosicionesLibres* vecPosLib = new vecPosicionesLibres;
	jugada* jugada1 = nullptr;
	cout << *vec << endl << endl;
	cout << "Ingrese la posición de la tabla con la que desea jugar: "; cin >> op;
	tabla* tabla1 = vec->getTabla(op);

	strat->setStrat(cercano);
	stratAleat->setStrat(aleatorio);
	while (!tabla1->lleno()) {

		// Jugador A
		do {
			cout << tabla1->toString() << endl;
			cout << "Jugador A: " << endl;
			cout << "Fila: "; cin >> x;
			cout << "Columna: "; cin >> y;
		} while (!validar::isValidaParaLinea(x, y) || !validar::isLibre(tabla1, x, y));
		tabla1->setLinea(x, y);
		validar::completarLetras(tabla1, *jugador1);
		cout << tabla1->toString() << endl;
		if (tabla1->lleno()) break;
		//después de que está lleno, para ver si se puede seguir jugando
		jugada1 = new jugada(x, y);
		vecPosLib->llenarCerca(tabla1, jugada1);

		// Compu
		cout << "Computadora: " << endl;
		if (strat->runStrat(tabla1, *vecPosLib) == true) {
			strat->runStrat(tabla1, *vecPosLib);
		}
		else if (strat->runStrat(tabla1, *vecPosLib) == false) {
			stratAleat->runStrat(tabla1, *vecPosLib);
		}
		validar::completarLetras(tabla1, *jugador2);
		cout << tabla1->toString() << endl;
		//vecPosLib->removeAll();
	}

	cout << *tabla1;
	cout << jugador1->toString() << endl;
	cout << jugador2->toString() << endl;
}

void juego::jugadorVsCompuCen(vecTablas* vec) {
	int op, x, y;
	jugador* jugador1 = new jugador('A');
	jugador* jugador2 = new jugador('B');
	jugadorStrat* strat = new jugadorStrat();
	estrategia* central = new stratCentral();
	vecPosicionesLibres* vecPosLib = new vecPosicionesLibres;
	cout << *vec << endl << endl;
	cout << "Ingrese la posición de la tabla con la que desea jugar: "; cin >> op;
	tabla* tabla1 = vec->getTabla(op);
	vecPosLib->llenar(tabla1);

	strat->setStrat(central);
	while (!tabla1->lleno()) {

		// Jugador A
		do {
			cout << tabla1->toString() << endl;
			cout << "Jugador A: " << endl;
			cout << "Fila: "; cin >> x;
			cout << "Columna: "; cin >> y;
		} while (!validar::isValidaParaLinea(x, y) || !validar::isLibre(tabla1, x, y));
		tabla1->setLinea(x, y);
		vecPosLib->remove(x, y);
		validar::completarLetras(tabla1, *jugador1);
		cout << tabla1->toString() << endl;
		if (tabla1->lleno()) break;

		// Compu
		cout << "Computadora: " << endl;
		strat->runStrat(tabla1, *vecPosLib);
		validar::completarLetras(tabla1, *jugador2);
		cout << tabla1->toString() << endl;
	}

	cout << *tabla1;
	cout << jugador1->toString() << endl;
	cout << jugador2->toString() << endl;
}

void juego::jugadorVsCompuPeri(vecTablas* vec) {
	int op, x, y;
	jugador* jugador1 = new jugador('A');
	jugador* jugador2 = new jugador('B');
	jugadorStrat* strat = new jugadorStrat();
	estrategia* periferico = new stratPeriferico();
	vecPosicionesLibres* vecPosLib = new vecPosicionesLibres;
	cout << *vec << endl << endl;
	cout << "Ingrese la posición de la tabla con la que desea jugar: "; cin >> op;
	tabla* tabla1 = vec->getTabla(op);
	vecPosLib->llenar(tabla1);

	strat->setStrat(periferico);
	while (!tabla1->lleno()) {

		// Jugador A
		do {
			cout << tabla1->toString() << endl;
			cout << "Jugador A: " << endl;
			cout << "Fila: "; cin >> x;
			cout << "Columna: "; cin >> y;
		} while (!validar::isValidaParaLinea(x, y) || !validar::isLibre(tabla1, x, y));
		tabla1->setLinea(x, y);
		vecPosLib->remove(x, y);
		validar::completarLetras(tabla1, *jugador1);
		cout << tabla1->toString() << endl;
		if (tabla1->lleno()) break;

		// Compu
		cout << "Computadora: " << endl;
		strat->runStrat(tabla1, *vecPosLib);
		validar::completarLetras(tabla1, *jugador2);
		cout << tabla1->toString() << endl;
	}

	cout << *tabla1;
	cout << jugador1->toString() << endl;
	cout << jugador2->toString() << endl;
}
