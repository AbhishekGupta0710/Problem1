#pragma once

#include"Task.h"
#include<list>
#include"ISortAlgorithm.h"
#include"IViewAlgorithm.h"

using namespace std;

class TODOList{
	list<Task*> tasks;
	ISortAlgorithm *sortAlgorithm;
	IViewAlgorithm *viewAlgorithm;

public:
	void setSortAlgorithm(ISortAlgorithm *sortAlgorithm)
	{
		this->sortAlgorithm = sortAlgorithm;
	}

	void setViewAlgorithm(IViewAlgorithm* viewAlgorithm)
	{
		this->viewAlgorithm = viewAlgorithm;
	}

	void displayList()
	{
		sortAlgorithm->sortList(tasks);
		viewAlgorithm->formattedDisplay(tasks);
	}

	void addTask(Task* task)
	{
		tasks.push_back(task);
	}

};