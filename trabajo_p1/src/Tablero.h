#pragma once
#include "Ficha.h"
#include "Casilla.h"

#include<vector>

class Tablero
{
public:
	Tablero(int n);	//Creador de un tablero vacio a partir de su tanma�o
	Tablero(Tablero * T);	//constructor copia del tablero
	~Tablero(); //  destructor del tablero que libera la memoria de la matriz de casillas

	//tratamiento estado
	void init();
				
	int GetSize() { return N; }				  // Dar tama�o del tablero
	Casilla** GetTab() { return tab; }  // dar puento a las casillas del tablero
	Ficha f;
private:

	const int N;
	Casilla ** tab;
};

