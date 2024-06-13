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
#include "estrategia.h"

class stratCentral : public estrategia {
public:
	virtual bool strat(tabla* mat, vecPosicionesLibres& vec);

};