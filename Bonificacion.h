#pragma once
#include "Vector2D.h"
class Bonificacion
{
	float radio;
	Vector2D posicion;
	Vector2D velocidad;
	Vector2D aceleracion;
public:
	Bonificacion();
	virtual ~Bonificacion();
	void dibuja();
	 void mueve(float);
	 void setpos(float, float);
	void setvel(float, float);
	Vector2D getpos();
};