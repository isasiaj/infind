#include "Casilla.h"
#include <iostream>



Casilla::Casilla()
{
	ficha = NULL;
}


Casilla::~Casilla()
{ 
	if(ficha!=NULL)
	delete ficha;
}

void * Casilla::GetFicha() const { return ficha; }

void Casilla::SetFicha(Ficha * f1) { ficha = f1; }
