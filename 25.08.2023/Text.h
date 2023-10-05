#pragma once
#include <iostream>
using namespace std;


class Text{
private:
	string text;

public:
	Text();
	Text(string text);
	virtual void display();
};
