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

	Vector2D Location;

	char Shape;

	//interface ���� �Ͽ� �����
	//pure virtual function (������ ǻ�� �Լ�)

	virtual void Render();

};

