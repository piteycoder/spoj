// stos.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string znak;
	int i = 0;
	int tab[10], x;
	while (cin >> znak)
	{
		if (znak == "-")
		{
			if (i == 10) { i--; }
			if (i == 0)
			{
				cout << ":(" << endl;
			}
			else
			{
				i--;
				cout << tab[i] << endl;
				tab[i] = 0;
			}
		}
		else if (znak == "+")
		{
			cin >> x;
			if (i < 0) { i = 0; }
			if (i == 10)
			{
				cout << ":(" << endl;
			}
			else
			{
				cout << ":)" << endl;
				tab[i] = x;
				i++;
			}
		}
	}
	return 0;
}

