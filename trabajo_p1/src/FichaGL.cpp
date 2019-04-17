#include "FichaGL.h"
#include "glut.h"



void FichaGL::Dibuja(void * f) {
	switch ((clase_t)((Ficha *)f)->GetClase())
	{
	case    OBSTACULO :

		
		break;
	case    SOLDADO:
		DibujaSoldado();
		break;
	case    FRANCOTIRADOR:

		break;
	case    TANQUE:

		break;
	case    ARTILLLERO:

		break;
	default:
		break;
	}
}
void FichaGL::DibujaSoldado() {
	glColor3ub(0, 0, 255);
	glutSolidSphere(0.075f, 20, 20);
}