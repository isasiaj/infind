#pragma once
enum clase_t { OBSTACULO, SOLDADO, FRANCOTIRADOR, TANQUE, ARTILLLERO };
#include "Punto.h"
class Ficha
{

public:
	Ficha();
	~Ficha();
	enum buff_t {NADA };

	//Tramiento del estado 
	void SetPos(int x1, int y1);
	void SetPosAnt(int x1, int y1);
	Punto GetPos();
	Punto GetPosAnt();
	clase_t GetClase() { return clase; }
	void SetClase(clase_t a);
private:

	unsigned int vida; //Press F to pay respects
	unsigned int escudo;
	Punto posicion;
	Punto posicion_ant;
	clase_t clase;
	buff_t buff;

};

