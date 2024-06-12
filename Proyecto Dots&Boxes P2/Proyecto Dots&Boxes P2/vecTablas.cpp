#include "vecTablas.h"
vecTablas::vecTablas()
{
	tam = 20; can = 0;
	vec = new tabla * [tam];
	for (int i = 0;i < tam;i++)
		vec[i] = nullptr;
}

vecTablas::~vecTablas()
{
	//for (int i = 0;i < can;i++)
		//delete vec[i];
	delete[] vec;
}

void vecTablas::agregar(tabla* tab)
{
	vec[can++] = tab;
}

tabla* vecTablas::getTabla(int pos) {
	for (int i = 0; i < can; i++) {
		if (pos == i) {
			return vec[i];
		}
	}

	return nullptr;
}

int vecTablas::getCan()
{
	return can;
}

string vecTablas::toString() const
{
	stringstream s;
	int cont = 0;
	s << "LISTA->" << endl;
	iteradorVecTablas* i = getIterador();
	while (i->masElementos()) {
		s << endl << "Tabla #" << cont << endl << endl;
		s << *(i->proximoElemento());
		cont++;
	}
	delete i;
	s << "<-" << endl;
	return s.str();
}

iteradorVecTablas* vecTablas::getIterador() const
{
	return new iteradorVecTablas(can, vec);
}

ostream& operator<<(ostream& COUT, vecTablas& obj)
{
	COUT << obj.toString() << endl;
	return COUT;
}

