// prostedodawaniepiotrusia.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
	string liczba;
	int t;
	int a, d, suma1;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		a = 0, suma1 = 0;
		cin >> liczba;
		for (int j = 0, int k = liczba.length()-1; j < k; j++, k--)
		{
			if (liczba[j]!=liczba[k])
			{
				break;
			}
		}
		if (j < k) { cout << liczba << " " << a << endl; }
		else
		{
			d = atoi(liczba.c_str());
			while (d != 0)
			{
				suma1 = suma1 + (d % 10);
				d = d / 10;
			}

		}
	}
    return 0;
}

