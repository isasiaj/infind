#include "Tablero.h"



Tablero::Tablero(int n):N(n)
{

	tab = new Casilla*[N];
	for (int i = 0; i < N; i++) {
		tab[i] = new Casilla[N];			//initially empty
	}

}


Tablero::Tablero(Tablero * T) :N(T->GetSize())
{
	tab = T->GetTab();
}


Tablero::~Tablero()
{
	for (int i = 0; i < N; i++) 
		delete[] tab[i];
	delete[] tab;
}

void Tablero::init() {

	tab[1][2].SetFicha(&f);
	((Ficha *)tab[1][2].GetFicha())->SetClase(SOLDADO);
	((Ficha *)tab[1][2].GetFicha())->SetPos(2, 3);
	((Ficha *)tab[1][2].GetFicha())->SetPos(2, 3);
}
