// app.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "steamclient64.h"
int main()
{
	char ball[6] = "balls";
	GetData(0,0,0,ball);
    std::cout << "Hello World!\n";
}
