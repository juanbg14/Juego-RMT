#include"Personaje.h"
void Personaje::mueve(float m) {
	posicion = posicion + velocidad * m + aceleracion * m * m * 0.5f;
	velocidad = velocidad + aceleracion * m;
}
void Personaje::setpos(float x, float y) {
	posicion.x = x;
	posicion.y = y;
}
void Personaje::setvel(float x, float y) {
	velocidad.x = x;
	velocidad.y = y;
}
void Personaje::setvida(float vida){
	this->vida=vida;
}
Vector2D Personaje::getpos() {
	return posicion;
}
float Personaje::getaltura() {
	return altura;
}
