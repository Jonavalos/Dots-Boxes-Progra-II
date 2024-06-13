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
#include "baseObj.h"
#include "tabla.h"
class iteradorVecTablas
{
private:
	int i; 
	int can; 
	tabla** vec; 

public:
	iteradorVecTablas(int cant, tabla* v[]);
	virtual ~iteradorVecTablas();
	virtual bool masElementos();
	virtual tabla* proximoElemento();
	virtual string toString() const;

};

