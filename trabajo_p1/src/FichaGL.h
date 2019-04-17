#pragma once
#include "Ficha.h"

class FichaGL {
public:
	~FichaGL() {}
	static void Dibuja(void * f);
	static void DibujaSoldado();


private:
	FichaGL() {}
};