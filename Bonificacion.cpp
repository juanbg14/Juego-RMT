#include"Bonificacion.h"
Bonificacion::Bonificacion() {

}
 Bonificacion::~Bonificacion() {

}
 void Bonificacion::dibuja() {

}
 void Bonificacion::mueve(float) {
     posicion = posicion + velocidad * t + aceleracion * t * t * 0.5f;
     velocidad = velocidad + aceleracion * t;
}
 void Bonificacion::setpos(float x, float y) {
     posicion.x = x;
     posicion.y = y;
}
 void Bonificacion::setvel(float x, float y) {
     velocidad.x = x;
     velocidad.y = y;
}
 Vector2D Bonificacion::getpos() {
     return posicion;
}