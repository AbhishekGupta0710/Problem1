#pragma once

#include"ISortAlgorithm.h"
#include<list>
#include"Task.h"
#include<algorithm>
#include<algorithm>
using namespace std;

class UnsortedStrategy : public ISortAlgorithm{
private:

public:
	void sortList(list<Task*> tasks)
	{
		//UnsortedStrategy::randomShuffle(tasks);
		tasks.sort();
	}

	//static randomShuffle(list<Task*> tasks)
	//{
	//	random_shuffle(tasks.begin(), tasks.end());
	//}
};