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
#include "validar.h"
#include "vecTablas.h"
#include "tabla_3x3.h"
#include "tabla_3x4.h"
#include "tabla_3x5.h"
#include "jugador.h"
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
	bool setLinea(int, int);
	bool validarLinea(int i, int j);
	bool lleno();
	bool completarLetras(jugador*);
	bool isLibre(int, int);
	bool isCasillaRodeada(int, int);
	bool setLetra(int, int, char);
	string toString();

	//

	virtual void actualizarTabBin2();
	bool isLibreBin2(int x, int y, int f, int c);
	virtual string toStringBin();

};