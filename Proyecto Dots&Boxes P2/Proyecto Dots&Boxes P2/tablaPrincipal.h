#pragma once
#include "validar.h"
#include "vecTablas.h"
#include "tabla_3x3.h"
#include "tabla_3x4.h"
#include "tabla_3x5.h"
class tablaPrincipal
{
private:
	int _filas; int _columnas;
	char** _tabla;
	bool** _tablaBin; //procedimientos
	bool** _tablaBin2;//agregar (ver si hay disponibilidad)

public:
	tablaPrincipal();
	virtual ~tablaPrincipal();
	bool agregar(tabla* tab);
	//bool setLinea(int, int);
	int getCantCol();
	int getCantFil();
	string toString();

	//

	virtual void actualizarTabBin2();
	bool isLibreBin2(int x, int y, int f, int c);
	virtual string toStringBin();

};

