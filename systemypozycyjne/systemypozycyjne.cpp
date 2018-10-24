// systemypozycyjne.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
const int h = 16;
const int e = 11;
void hex(int x);
void ele(int x);
char Con11(int x);
char Con16(int x);
int main()
{
	int t, n;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		cin >> n;
		hex(n); cout << " "; ele(n);
		cout << endl;
	}
    return 0;
}
char Con11(int x)
{
	string el{ '0','1','2','3','4','5','6','7','8','9','A'};
	for (int i = 0; i < 11; i++)
	{
		if (i == x) return el[i];
	}
}
char Con16(int x)
{
	string he{ '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
	for (int i = 0; i < 16; i++)
	{
		if (i == x) return he[i];
	}
}
void ele(int x)
{
	int i = 0, a;
	string number;
		while (x)
		{
			a = x % e;
			number += Con11(a);
			x /= e;
			i++;
		}
		for (--i; i >= 0; i--)
		{
			cout << number[i];
		}
}
void hex(int x)
{
	int i = 0, a;
	string number;
		while (x)
		{
			a = x % h;
			number += Con16(a);
			x /= h;
			i++;
		}
		for (--i; i >= 0; i--)
		{
			cout << number[i];
		}
}


