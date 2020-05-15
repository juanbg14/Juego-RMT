#pragma once
#include"Personaje.h"
class Robot : public Personaje {
public:
	Robot();
	virtual ~Robot();
	void dibuja();
};