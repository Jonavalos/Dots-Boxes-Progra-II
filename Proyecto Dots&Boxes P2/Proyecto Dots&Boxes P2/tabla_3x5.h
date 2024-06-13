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
#include "tabla.h"

class tabla_3x5 : public tabla {
public:
	tabla_3x5();
	virtual ~tabla_3x5();

	virtual void setLinea(int, int);
	virtual bool lleno();
	virtual void setCajaCompletada(int fila, int col, char jug);
	//virtual void isCajaCompletada(jugador& jug);
	virtual string toString() const;

	virtual string toStringBin() { return ""; }
	virtual string toStringSimple() { return ""; }
	virtual void actualizarTabBinaria() {}
	virtual char getValor(int f, int c);
	virtual bool setLetra(int fil, int col, char letra);
	virtual int getFila();
private:
	char** _tabla;
	int _filas;
	int _columnas;

};