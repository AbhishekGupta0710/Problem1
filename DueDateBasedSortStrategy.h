#pragma once

#include"ISortAlgorithm.h"
#include<algorithm>


using namespace std;

class DueDateBasedSortStrategy : public ISortAlgorithm{
public:
	static bool compareCriteria( Task* task1,  Task* task2) 
	{
		if (task1->getDueDate() < task2->getDueDate())
			return true;
		else
			return false;
	}

	void sortList(list<Task*> tasks)
	{
		tasks.sort(compareCriteria);
	
	}

};