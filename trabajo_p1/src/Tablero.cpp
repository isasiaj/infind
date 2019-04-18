#include "Tablero.h"



Tablero::Tablero(int n):N(n)
{

	tab = new Ficha**[N];
	for (int i = 0; i < N; i++) {
		tab[i] = new Ficha*[N];			//Crear matriz
	}

	for (int j = 0; j < N; j++) {
		for (int i = 0; i < N; i++) {
			tab[i][j] = NULL;			//Inicializar posciones como vacias
		}
	}

}


Tablero::~Tablero()
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if(tab[i][j]!= NULL) delete tab[j][i];
		}
		delete[] tab[i];
	}

	delete[] tab;
}

void Tablero::init() {

	tab[1][2]= new Ficha;
	tab[1][2]->SetClase(SOLDADO);
	tab[1][2]->SetPos(2, 3);
}
