#pragma once
#include "Tablero.h"
#include "FichaGL.h"
//Tablero que tiene acceso a la glut,se engarga de dibujar
class GlutTablero
{
public:
	GlutTablero(Tablero *T);
	~GlutTablero();
	void init();
	void DrawTablero();
	void Draw();

	//info
	void setSize(int s) { N = s; }
	int getSize() { return N; }



protected:
	float width;
	int N;								 //size 
	Tablero* tablero_gl;

	//visualization	
	double center_x, center_y, center_z;
	double dist;

};

