// ROL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int t,n;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		int tab[n];
		for (int j = 0; j < n; j++)
		{
			cin >> tab[j];
		}
		for (int k = 1; k < n; k++)
		{
			cout << tab[k] << " ";
		}
		cout << tab[0] << endl;
	}
    return 0;
}

