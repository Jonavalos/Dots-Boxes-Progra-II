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

class juego {
public:

	static int menuJuego();
	static void jugadorVsJugador(vecTablas* vec);

	static int menuVsCompu();
	static void jugadorVsCompu(vecTablas* vec);

};
