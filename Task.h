#pragma once

#include<iostream>
#include<string>
using namespace std;

class Task{
private:
	string description;
	long priority;
	long dueDate;

public:
	Task(){}

	Task(string description, long priority, long date)
	{
		this->description = description;
		this->priority = priority;
		this->dueDate = date;
	}

	string getDescription()
	{
		return description;
	}

	long getPriority()
	{
		return priority;
	}

	long getDueDate()
	{
		return dueDate;
	}

	void display()
	{
		cout << "Task: [Description= " << description << ", Priority = " << priority << ", DueDate= " << dueDate << "]" << endl;
	}


};