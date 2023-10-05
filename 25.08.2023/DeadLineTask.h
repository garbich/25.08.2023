#pragma once
#include <iostream>
#include "Text.h"
using namespace std;

class DeadLineTask :
    public Text
{
private:
    string deadLineTask;
    int day;
    int month;


public:
    DeadLineTask(string deadLineTask, int month, int day);
    void display() override;
};