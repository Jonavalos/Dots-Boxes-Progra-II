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
#include "tabla_3x3.h"
#include "tabla_3x4.h"
#include "tabla_3x5.h"
#include "vecTablas.h"
#include "jugadorStrat.h"
#include "stratAleatorio.h"
#include "stratCentral.h"
#include "stratCercano.h"
#include "stratIslas.h"
#include "stratPeriferico.h"
#include "ansi_term.h"
#include "jugada.h"
#include "tablaPrincipal.h"

class juego {
public:

	static int menuJuego();
	static int menuTablero();
	static tablaPrincipal* crearTableroIrregular(vecTablas* vec, tablaPrincipal* tablaP);
	static void jugVsJugIrregular(vecTablas*, tablaPrincipal*);
	static void jugadorVsJugador(vecTablas* vec);

	static int menuVsCompu();
	static void jugadorVsCompuAl(vecTablas* vec);
	static void jugadorVsCompuCer(vecTablas* vec);
	static void jugadorVsCompuCen(vecTablas* vec);
	static void jugadorVsCompuPeri(vecTablas* vec);
	static void jugadorVsCompuIslas(vecTablas* vec);

};

