#pragma once
#include "Actor.h"

class Wall : public Actor
{
public:
	Wall()
	{
		Shape = ' ';
	}
	virtual ~Wall() {}

};

