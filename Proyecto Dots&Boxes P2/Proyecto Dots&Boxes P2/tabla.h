#pragma once
#include "bibliotecas.h"
#include "baseObj.h"
#include "validar.h"
#include "jugador.h"

class tabla:public baseObj { //interfaz del tablero
public:
	tabla(){}
	virtual ~tabla(){}

	virtual void setLinea(int, int) = 0;
	virtual bool lleno() = 0;
	virtual void setCajaCompletada(int fila, int col, char jug) = 0;
	//virtual void isCajaCompletada(jugador& jug) = 0;
	virtual string toString() const = 0;

	friend ostream& operator<<(ostream& COUT, tabla& tabla){
		COUT << tabla.toString() << endl;
		return COUT;
	}
	virtual void actualizarTabBinaria() = 0;
	virtual string toStringBin() { return ""; }
	virtual string toStringSimple() { return ""; }
	virtual char getValor(int f, int c) = 0;
	virtual int getFila() = 0;

	virtual bool setLetra(int fil, int col, char letra) = 0;

private:

};