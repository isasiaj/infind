#pragma once
#include "Ficha.h"

#include<vector>

class Tablero
{
public:
	Tablero(int n);	//Creador de un tablero vacio a partir de su tanmaño
	~Tablero(); //  destructor del tablero que libera la memoria de la matriz de casillas

	//tratamiento estado
	void init();
				
	int GetSize() { return N; }				  // Dar tamaño del tablero
	Ficha *** GetTab() { return tab; }  // dar puento a las casillas del tablero
private:

	const int N;
	Ficha *** tab;
};

