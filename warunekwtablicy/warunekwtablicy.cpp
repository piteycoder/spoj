// warunekwtablicy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int n, t;
	char znak;
	cin >> n;
	int *tab = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> tab[i];
	}
	cin >> znak >> t;
	if (znak == '>')
	{
		for (int j = 0; j < n; j++)
		{
			if (tab[j] > t) { cout << tab[j] << endl; }
		}
	}
	else if (znak == '<')
	{
		for (int j = 0; j < n; j++)
		{
			if (tab[j] < t) { cout << tab[j] << endl; }
		}
	}
	delete[] tab;
    return 0;
}

