#include"BulletView.h"
#include"ListView.h"
#include"NumberedView.h"
#include"DueDateBasedSortStrategy.h"
#include"PriorityBasedSortStrategy.h"
#include"UnsortedStrategy.h"
#include"TODOList.h"

using namespace std;

int main()
{
	TODOList *list1 = new TODOList();
	list1->addTask( new Task("Task1", 9, 30));
	list1->addTask( new Task("Task2", 1, 25));
	list1->addTask( new Task("Task3", 0, 1));
	list1->addTask( new Task("Task4", 5, 8));
	list1->addTask( new Task("Task5", 7, 9));


	list1->setSortAlgorithm(new PriorityBasedSortStrategy());
	list1->setViewAlgorithm(new NumberedView());
	list1->displayList();

	cout << " " << endl;

	list1->setSortAlgorithm(new UnsortedStrategy());
	list1->setViewAlgorithm(new ListView());
	list1->displayList();
	return 0;
}