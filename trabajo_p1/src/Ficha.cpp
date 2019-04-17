#include "Ficha.h"





Ficha::Ficha()
{
	vida = escudo = 100;
	SetPos(-1, -1);
	SetPosAnt(-1, -1);
	clase = OBSTACULO;
	buff = NADA;
}


Ficha::~Ficha()
{
}

void Ficha::SetPos(int x1, int y1)
{
	posicion.x = x1;
	posicion.y = y1;
}
void Ficha::SetPosAnt(int x1, int y1)
{
	posicion_ant.x = x1;
	posicion_ant.y = y1;
}
void Ficha::SetClase(clase_t a) { clase = a; }

Punto Ficha::GetPos() { return posicion; }
Punto Ficha::GetPosAnt() { return posicion_ant; }