#include "iteradorVecTablas.h"

iteradorVecTablas::iteradorVecTablas(int cant, tabla* v[])
	:i(0), can(cant), vec(v) {}

iteradorVecTablas::~iteradorVecTablas()
{
}

bool iteradorVecTablas::masElementos()
{
	return i < can;
}

tabla* iteradorVecTablas::proximoElemento()
{
	tabla* obj = nullptr;
	if (masElementos()) {
		obj = vec[i++];
	}
	return obj;
}

string iteradorVecTablas::toString() const
{
	return "";
}