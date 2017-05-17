#pragma once

#include"Task.h"
#include<list>
using namespace std;

class ISortAlgorithm{

public:
	virtual void sortList(list<Task*> tasks) = 0;
};