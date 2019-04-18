#include "Ficha.h"
#include <fstream>





Ficha::Ficha()
{
	vida = escudo = 0;
	SetPos(-1, -1);
	SetPosAnt(-1, -1);
	clase = OBSTACULO;
	buff = NADA;
}

Ficha::~Ficha(){}


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


void Ficha::SetBuff(buff_t a) 
{
	
	buff = a; 

}
void Ficha::SetClase(clase_t a) { clase = a; }
void Ficha::SetVida(unsigned int  v) { vida = v; }
void Ficha::SetEscudo(unsigned int  e) { escudo = e; }
void Ficha::SetDaño(unsigned int  d) { daño = d; }

Punto Ficha::GetPos() { return posicion; }
Punto Ficha::GetPosAnt() { return posicion_ant; }
clase_t Ficha::GetClase() { return clase; }
buff_t Ficha::GetBuff() { return buff; }
unsigned int Ficha::GetVida() { return vida; }
unsigned int Ficha::GetEscudo() { return escudo; }
unsigned int Ficha::GetDaño() { return daño; }