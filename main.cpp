#include "World.h"
#include <iostream>
#include "Actor.h"
#include "Player.h"
#include "World.h"
#include "Monster.h"
#include <list>
#include <vector>





int main()
{
	//std::list<int> A;
	//std::vector<int> VA;
	//std::stack<int> SA;

	//for (auto iter = VA.be
	//{

	//}

	World* MyWorld = new World();

	MyWorld->SpawnActor(new Player());
	MyWorld->SpawnActor(new Monster());

	//range for (���� �߰��Ȱɷ� �ϴ� ��� �� ª�������Ѵ�) Actor* >> auto �� ��ü���� �˾Ƽ�ã����
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