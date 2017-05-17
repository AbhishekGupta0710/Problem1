#pragma once

#include"IViewAlgorithm.h"

using namespace std;

class BulletView :public IViewAlgorithm{

public:
	void formattedDisplay(list<Task*> tasks)
	{
		list<Task*>::iterator itr;
		for (itr = tasks.begin(); itr != tasks.end(); itr++)
		{
			cout << "* ";
			(*itr)->display();
		}
	}
};