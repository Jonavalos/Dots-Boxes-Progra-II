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
#include "estrategia.h"
#include "tabla.h"
#include "vecPosicionesLibres.h"
class jugadorStrat {
public:
	jugadorStrat();

	void setStrat(estrategia*);
	bool runStrat(tabla* mat, vecPosicionesLibres& vec);

private:
	estrategia* _stratPtr;

};

