
#pragma once
#include"Personaje.h"
class Enemigo : public Personaje {
public:
	Enemigo();
	virtual ~Enemigo();
	void dibuja();
};