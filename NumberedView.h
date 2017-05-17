#pragma once

#include"IViewAlgorithm.h"

using namespace std;

class NumberedView :public IViewAlgorithm{
private:
	long count = 0;
public:
	void formattedDisplay(list<Task*> tasks)
	{
		list<Task*>::iterator itr;
		for (itr = tasks.begin(); itr != tasks.end(); itr++)
		{
			count++;
			cout << count << ". ";
			(*itr)->display();
		}
	}
};