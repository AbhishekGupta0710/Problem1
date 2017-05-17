#pragma once

#include"Task.h"
#include<list>
using namespace std;

class IViewAlgorithm{

public:
	virtual void formattedDisplay(list<Task*> tasks) = 0;
};