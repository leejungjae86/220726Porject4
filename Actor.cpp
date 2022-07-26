#include "Actor.h"
#include <iostream>
#include <Windows.h>


void Actor::Render()
{
	COORD Cur;
	Cur.X = Location.X = 1;
	Cur.Y = Location.Y = 1;

	std::cout << Shape;
}
