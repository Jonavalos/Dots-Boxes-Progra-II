#pragma once
#include "juego.h"

class controladora {
public:
	controladora();
	controladora(vecTablas* vec);
	virtual ~controladora();

	int controlMenu();

	void control0();

	void control1();
	int control2();
	void control2_1();
	void control2_2();
	void control2_3();
	void control2_4();
	void control2_5();

private:
	vecTablas* _vec;

};

