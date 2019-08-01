// basiccpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <ostream>
#include "Order.h";



int main()
{

	Order o;
	o.SetDiscount(5);
	o.SetDiscount(10);

	Order p = o;
	p.SetDiscount(11);

	int d = o.GetDiscountAmount();

}

//TODO
//Check unique_pointer