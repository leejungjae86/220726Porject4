#pragma once
#include "Actor.h"
#include "Wall.h"



class Player : public Actor
{
public:
	Player()
	{
		Shape = 'P';
	}
	virtual ~Player() {}

	//virtual void Render() override {}


};

