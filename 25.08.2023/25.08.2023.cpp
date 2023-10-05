#include <iostream>
#include "Text.h"
#include "GreatedTask.h"
#include "DeadLineTask.h"
#include "DailyTask.h"
using namespace std;

int main()
{
	Text* all[5];

	all[0] = new Text("Simple task");
	all[1] = new GreatedTask("Important task");
	all[2] = new DeadLineTask("Urgent task", 8, 12);
	all[3] = new DailyTask("Daily task ", 10, 30);
	all[4] = new DailyTask("Daily task 1", 12);


	all[0]->display();
	all[1]->display();
	all[2]->display();
	all[3]->display();
	all[4]->display();
	
}