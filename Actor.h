#pragma once
#include "Vector2D.h"

//abstract class
class Actor
{
public:
	Actor() : Shape (' ')
	{
	}
	virtual ~Actor() {}

	//has a
	Vector2D Location;

	char Shape;

	//interface 강제 하여 만드는
	//pure virtual function (가상의 퓨어 함수)
	//virtual void Render() = 0;
	virtual void Render();

};

