#pragma once
#include "Actor.h"

class Monster : public Actor
{
public:
	Monster() {}
	virtual ~Monster()
	{
		Shape = 'M';
	}

};

