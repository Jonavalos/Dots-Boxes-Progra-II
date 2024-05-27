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

string vecTablas::toString() const
{
	stringstream s;
	s << "LISTA->" << endl;
	iteradorVecTablas* i = getIterador();
	while (i->masElementos()) {
		s << *(i->proximoElemento());
	}
	delete i;
	s << "<-" << endl;
	return s.str();

	/*stringstream s;
	for (int i = 0;i < can;i++) {
		s << vec[i] << endl;
	}
	return s.str();*/
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

