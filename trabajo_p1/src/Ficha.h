#pragma once

enum clase_t { OBSTACULO, SOLDADO, FRANCOTIRADOR, TANQUE, ARTILLLERO };
enum buff_t { NADA };

#include "Punto.h"
class Ficha
{

public:
	Ficha();
	~Ficha();

	//Tramiento del estado 
	void SetPos(int x1, int y1);
	void SetPosAnt(int x1, int y1);
	void SetClase(clase_t a);
	void SetBuff(buff_t a);
	void SetVida(unsigned int  v);
	void SetEscudo(unsigned int  e);
	void SetDaño(unsigned int  d);

	Punto GetPos();
	Punto GetPosAnt();
	clase_t GetClase();
	buff_t GetBuff();
	unsigned int GetVida();
	unsigned int GetEscudo();
	unsigned int GetDaño();
private:

	unsigned int vida; //Press F to pay respects
	unsigned int escudo;
	unsigned int daño;
	Punto posicion;
	Punto posicion_ant;
	clase_t clase;
	buff_t buff;

};

