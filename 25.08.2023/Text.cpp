#include "Text.h"

Text::Text(){
	text = "";
}

Text::Text(string text){
	this->text = text;
}

void Text::display(){

	cout << text << endl;
}