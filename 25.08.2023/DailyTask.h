#pragma once
#include <iostream>
#include "Text.h"
using namespace std;

class DailyTask :
    public Text
{
private:
    string dailyTask;
    int hour;
    int minute;

public:
    DailyTask();
    DailyTask(string dailyTask, int hour);
    DailyTask(string dailyTask, int hour, int minute);
    void display() override;
};