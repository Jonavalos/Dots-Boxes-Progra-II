#pragma once
#include "tabla.h"

class tabla_3x4 : public tabla {
public:
	tabla_3x4();
	virtual ~tabla_3x4();

	virtual void setLinea(int, int);
	virtual bool lleno();
	virtual void setCajaCompletada(int fila, int col, char jug);
	//virtual void isCajaCompletada(jugador& jug);
	virtual string toString() const;

	virtual string toStringBin() { return ""; }
	virtual string toStringSimple() { return ""; }
	virtual void actualizarTabBinaria() {}
	virtual char getValor(int f, int c);
private:
	char** _tabla;
	int _filas;
	int _columnas;

};