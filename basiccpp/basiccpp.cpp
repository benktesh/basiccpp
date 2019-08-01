// basiccpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <ostream>
#include "Array.cpp"

int main()
{

	int size = 5;
	Array<int> mArray{ size };
	for (int i = 0; i < size; i++) {
		mArray[i] = i;
	}
	
}

 