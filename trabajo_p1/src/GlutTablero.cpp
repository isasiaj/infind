#include "GlutTablero.h"
#include "glut.h"


GlutTablero::GlutTablero(Tablero *T): tablero_gl(T)
{
	N = tablero_gl->GetSize();
	width = 0.15; // cambiar
	dist = 2;					//distance of viewpoint from center of the board
	center_z = 0;
}


GlutTablero::~GlutTablero()
{
}

void GlutTablero::init() {

;

	glEnable(GL_LIGHT0);
	glEnable(GL_LIGHTING);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);
	glMatrixMode(GL_PROJECTION);
	gluPerspective(40.0, 800 / 600.0f, 0.1, 150);
}

void GlutTablero::DrawTablero() {
	glColor3ub(0, 0, 0);
	float dist = N * width;
	for (int i = 0; i <= N; i++) {
		if (i% N == 0) glLineWidth(4);
		else glLineWidth(1);
		glBegin(GL_LINES);
		glVertex3f(i*width, 0, 0);
		glVertex3f(i*width, -dist, 0);
		glVertex3f(0, -i * width, 0);
		glVertex3f(dist, -i * width, 0);
		glEnd();
	}

}
void GlutTablero::Draw() {
	center_x = N * width / 2;
	center_y = -N * width / 2;
	center_z = 0;

	//Borrado de la pantalla	
	glClearColor(1, 1, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	//Para definir el punto de vista
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(center_x, center_y, dist, center_x, center_y, center_z, 0, 1, 0);
	glEnable(GL_LIGHTING);

	DrawTablero();

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if(NULL!= tablero_gl->GetTab()[i][j].GetFicha())
			FichaGL::Dibuja(tablero_gl->GetTab()[i][j].GetFicha());
		}
	}

}