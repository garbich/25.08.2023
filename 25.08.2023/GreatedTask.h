#pragma once
#include <iostream>
#include "Text.h"
using namespace std;

class GreatedTask :
    public Text
{
private:
    string greatedTask;

public:
    GreatedTask(string greatedTask);
    void display() override;
};