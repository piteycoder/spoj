// Dwumiany.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
unsigned long long silnia(unsigned long long x);
int main()
{
	int t, n, k;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n >> k;
		cout << silnia(n) << endl;
	}
    return 0;
}
unsigned long long silnia(unsigned long long x)
{
	if (x == 0) return 1;
	else return x * silnia(x - 1);
}

