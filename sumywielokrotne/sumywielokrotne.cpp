// sumywielokrotne.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
bool CheckZero(int number);
int main()
{
	int x;
	long long full = 0, suma = 0;
	while (cin >> x)
	{
		if (CheckZero(x) != true)
		{
			suma += x;
		}
		else
		{
			cout << suma << endl;
			full += suma;
			suma = 0;
		}
	}
	cout << full << endl;
    return 0;
}
bool CheckZero(int number)
{
	if (number == 0) return true;
	else return false;
}


