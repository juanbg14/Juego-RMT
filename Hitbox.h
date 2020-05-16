#pragma once
#include "Vector2D.h"
class Hitbox 
{
private:
	float radio;
public:
	Hitbox();
	virtual ~Hitbox();
	void setradio(float);
	float getradio();
	float GetPos();
	float GetRandom();
	float GetVisa();
};
