#pragma once
#include"Vector2D"
class Personaje {
protected:
	Vector2D posicion;
	Vector2D velocidad;
	Vector2D aceleracion;
	float altura;
	float vida;
public:
	void mueve(float);
	void setpos(float ix, float iy);
	void setvel(float ix, float iy);
	Vector2D getpos();
	float getaltura();
};