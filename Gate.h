#pragma once
#include "Actor.h"

class Gate : public Actor
{
public:
	Gate() {}
	virtual ~Gate()
	{
		Shape = 'G';
	}

};

