#pragma once
#include "juego.h"

class controladora {
public:
	controladora();
	controladora(vecTablas* vec);
	virtual ~controladora();

	int controlMenu();

	void control0();

private:
	vecTablas* _vec;

};

