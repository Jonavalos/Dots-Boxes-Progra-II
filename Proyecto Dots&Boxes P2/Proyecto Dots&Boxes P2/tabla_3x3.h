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
	virtual bool setLetra(int fil, int col, char letra);
	virtual int getFila();
private:
	char** _tabla;
	bool** _tablaBin;
	int _filas;
	int _columnas;

};

