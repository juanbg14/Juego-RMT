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
	void setpos(float,float);
	void setvel(float,float);
	void setvida(float);
	float getvida();
	Vector2D getpos();
	float getaltura();
};
