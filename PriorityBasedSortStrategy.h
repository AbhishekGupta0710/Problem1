#pragma once

#include"ISortAlgorithm.h"
#include<algorithm>

using namespace std;

class PriorityBasedSortStrategy : public ISortAlgorithm{

public:
	struct doCompare
	{
		bool operator()( Task *i1,  Task *i2)
		{
			return (i1->getPriority() < i2->getPriority());
		}
	};
	//static int compareCriteria(  Task *task1,   Task* task2)
	//{
	//	if (task1->getPriority() < task2->getPriority())
	//		return true;
	//	else
	//		return false;
	//}

	void sortList(list<Task*> tasks)
	{
		tasks.sort(doCompare());
	}

};