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

class validar;
class tabla;
class tabla_3x3;
class tabla_3x4;
class tabla_3x5;
class jugador;
class jugada;
class tablaPrincipal;

class validar
{
public:
	static bool isLibre(tabla* mat, int fil, int col);

	static bool isValidaParaLinea(int fil, int col);

	static bool isFueraLimites(tabla* mat, int fil, int col);

	static bool isCasillaRodeada(tabla* mat, int fil, int col);

	static bool completarLetras(tabla* mat, jugador& j);

	static bool isCerca(jugada*, int, int);
};

