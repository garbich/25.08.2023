#include "DailyTask.h"


DailyTask::DailyTask(){
	dailyTask = "";
	hour = 0;
	minute = 0;
}

DailyTask::DailyTask(string dailyTask, int hour){
	this->dailyTask = dailyTask;
	this->hour = hour;
}

DailyTask::DailyTask(string dailyTask, int hour, int minute){
	this->dailyTask = dailyTask;
	this->hour = hour;
	this->minute = minute;
}

void DailyTask::display(){
	if (minute <= 0){
		cout << "Time: " << hour << ":00 " << dailyTask << endl;
	}
	else {
		cout << "Time: " << hour << ":" << minute << " " << dailyTask << endl;
	}
}