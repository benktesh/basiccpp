// basiccpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <ostream>
#include "IntArray.h"
#include "Array.hpp"
#include "Stack.hpp"



int main()
{
	
	Stack<int> stack{ 10 };
	assert(stack.IsEmpty());

	cout << stack;

	stack.Push(10);
	stack.Push(20);
	stack.Push(15);

	cout << stack;

	int x = stack.Pop();
	cout << x; 
	cout << stack;
	cout << stack;

	 
	

	/*
	Array<int> myArray{ 5 };
	for (int i = 0; i < 5; i++) {
		myArray[i] = i; 
	}
	
	myArray.print();

	for (int i = 0; i < 5; i++) {
		cout << myArray[i] << endl;
	}


	IntArray a{ 5 };
	for (int i = 0; i < 5; i++) {
		a[i] = i;
	}


	IntArray b = a;
	printArray(b);
	cout << endl;
	printArray(a);

    std::cout << "Hello World!\n"; 
	*/
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
