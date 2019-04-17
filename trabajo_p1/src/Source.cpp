#include <iostream>
#include "GlutTablero.h"
#include "glut.h"

#define TAM_TABLERO	8		//N*N 

/////////////////////////////////
//call back declarations: will be called by glut when registered
void OnDraw(void);
void OnKeyboardDown(unsigned char key, int x, int y);
void OnMouseClick(int button, int state, int x, int y);
void OnMouseMotion(int x, int y);
void OnMousePass(int x, int y);
void OnTimer(int value); 

////////////////////////////////////////////////
//global objects which make the world
Tablero tablero(TAM_TABLERO);
GlutTablero  escenario(&tablero);

///////////////////////////////////////////////

int main(int argc, char* argv[]) {
	//GL Initialization stuff
	glutInit(&argc, argv);

	glutInitWindowSize(800, 600);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutCreateWindow("MiJuego");

	//Register callbacks
	glutDisplayFunc(OnDraw);
	glutKeyboardFunc(OnKeyboardDown);
	glutMouseFunc(OnMouseClick);
	glutMotionFunc(OnMouseMotion);
	glutPassiveMotionFunc(OnMousePass);
	glutTimerFunc(25,OnTimer,0);			 

	//sets light and perspective
	escenario.init();
	tablero.init();
	//glut takes control
	glutMainLoop();

	return 0;
}

void OnDraw(void) {
	//////////////////////
	//captures drawing event
	//gives control to scene
	escenario.Draw();

	glutSwapBuffers();
}

void OnKeyboardDown(unsigned char key, int x_t, int y_t) {
	//////////////////////
	//captures keyboard event
	//gives control to scene

	glutPostRedisplay();

}

void OnMouseClick(int b, int state, int x, int y) {
	//////////////
	//captures clicks with mouse with or without special keys (CTRL or SHIFT)
	//gives control to board scene

	glutPostRedisplay();
}
void OnMouseMotion(int x, int y) {

	glutPostRedisplay();
}
void OnMousePass(int x, int y) {


	glutPostRedisplay();
}


void OnTimer(int value) {
	//****WRITE TIMER CODE HERE

	//sets new timer(do not delete)
	glutTimerFunc(25, OnTimer, 0);
	glutPostRedisplay();
}
