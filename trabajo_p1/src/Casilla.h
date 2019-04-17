#pragma once

#include "Ficha.h"
#include "Punto.h"
class Casilla
{
public:
	Casilla();
	~Casilla();
	void SetFicha(Ficha * f1);
	void* GetFicha()const;

	

private:
	void * ficha;

};

