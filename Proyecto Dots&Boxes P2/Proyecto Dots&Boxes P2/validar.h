#pragma once

class validar;
class tabla;
class tabla_3x3;
class tabla_3x4;
class tabla_3x5;
class jugador;

class validar
{
public:
	static bool isLibre(tabla* mat, int fil, int col);

	static bool isFueraLimites(tabla* mat, int fil, int col);

	static bool isCasillaRodeada(tabla* mat, int fil, int col);

	static bool completarLetras(tabla* mat, jugador& j);
};

