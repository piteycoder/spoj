// Mundial2014.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
bool numbers();
bool zero();
int main()
{
	using namespace std;
	cout << "Mundial ";
	cout << numbers() + numbers() << zero() << numbers() <<  numbers()+numbers()+numbers()+ numbers() << endl;
    return false;
}
bool zero()
{
	return false;
}
bool numbers()
{
	return true;
}

