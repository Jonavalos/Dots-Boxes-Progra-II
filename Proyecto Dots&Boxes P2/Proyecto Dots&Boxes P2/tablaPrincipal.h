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
	bool** _tablaBin;

public:
	tablaPrincipal();
	virtual ~tablaPrincipal();
	bool agregar(tabla* tab);
	string toString();

	//

	virtual void actualizarTabBinaria();
	bool isLibreBin(int x, int y, int f, int c);
	virtual string toStringBin();

};

