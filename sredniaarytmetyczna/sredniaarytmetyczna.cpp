// sredniaarytmetyczna.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
{
	unsigned short t, n;
	int closest, suma;
	float avg, k1;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		suma = 0; avg = 0; k1 = 0; 
		cin >> n;
		int *tab = new int[n];
		for (int j = 0; j < n; j++)
		{
			cin >> tab[j];
			suma += tab[j];
		}
		avg = suma / float(n);
		closest = tab[0];
		for (int k = 1; k < n; k++)
		{
			k1 = abs(tab[k] - avg);
			if (k1 < abs(closest - avg)) { closest = tab[k]; }
		}
		cout << closest << endl;
		delete [] tab;
	}
    return 0;
}

