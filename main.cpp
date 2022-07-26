#include "World.h"
#include <iostream>
#include "Actor.h"
#include "Player.h"
#include "World.h"
#include "Monster.h"
#include <list>
#include <vector>
#include <stack>


int main()
{
	//std::list<int> A;
	//std::vector<int> VA;
	//std::stack<int> SA;

	//VA.push_back(0);
	//VA.push_back(1);
	//VA.push_back(2);
	//for (auto Value : VA)
	//{
	//	std::cout << Value << std::endl;
	//}
	//for (int i = 0;
	//	i < A.size();
	//	++i)
	//{
	//	std::cout << A[i] << std::endl;

	//}

	World* MyWorld = new World();

	MyWorld->SpawnActor(new Player());
	MyWorld->SpawnActor(new Monster());

	//range for (새로 추가된걸로 하는 방법 더 짧아지긴한다) Actor* >> auto 로 대체가능 알아서찾아줌
	for (Actor* MyActor : MyWorld->ActorList)
	{
		MyActor->Render();
	}

	//for (int i = 0; i < MyWorld->ActorList.size(); ++i)
	//{
	//	MyWorld->ActorList[i]->Render();
	//}
	
	delete MyWorld;

	return 0;
}