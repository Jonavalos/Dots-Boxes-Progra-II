#include <iostream>
#include "controladora.h"
#include "ansi_term.h"
#include "tablaPrincipal.h"
#include "jugada.h"

using namespace std;

int main() {

	tabla* tabla3x3 = new tabla_3x3();
	tabla* tabla3x4 = new tabla_3x4();
	tabla* tabla3x5 = new tabla_3x5();

	vecTablas* veta = new vecTablas();
	veta->agregar(tabla3x3);
	veta->agregar(tabla3x4);
	veta->agregar(tabla3x5);
	
	tablaPrincipal* princial = new tablaPrincipal();
	controladora co(veta, princial);
	co.control0();

	return 0;
}