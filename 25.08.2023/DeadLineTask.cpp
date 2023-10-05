#include "DeadLineTask.h"


DeadLineTask::DeadLineTask(string deadLineTask, int month, int day){
	this->deadLineTask = deadLineTask;
	this->month = month;
	this->day = day;
}

void DeadLineTask::display(){
	cout << "Date: " << day << "." << month << " " << deadLineTask << endl;
}