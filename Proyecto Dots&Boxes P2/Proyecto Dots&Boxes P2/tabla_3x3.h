#pragma once
#include "tabla.h"

class tabla_3x3 : public tabla {
public:
	tabla_3x3();
	virtual ~tabla_3x3();

	virtual void setLinea(int, int);
	virtual bool lleno();
	virtual void setCajaCompletada(int fila, int col, char jug);
	virtual string toString() const;

	virtual void actualizarTabBinaria();
	virtual string toStringBin();
	virtual string toStringSimple();
	virtual char getValor(int f, int c);

private:
	char** _tabla;
	bool** _tablaBin;
	int _filas;
	int _columnas;

};

