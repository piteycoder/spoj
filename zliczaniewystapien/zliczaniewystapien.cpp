// zliczaniewystapien.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int a, b, j;
	while (cin >> a)
	{
		j = 0;
		cin >> b;
		int *tab = new int[b];
		for (int i = 0; i < b; i++)
		{
			cin >> tab[i];
			if (tab[i] == a) { ++j; }
		}
		cout << j << endl;
	}
    return 0;
}

