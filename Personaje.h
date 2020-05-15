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
	void setpos(float x, float y);
	void setvel(float x, float y);
	void setvida(float vida);
	Vector2D getpos();
	float getaltura();
};
