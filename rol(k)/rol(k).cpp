// rol(k).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int *tab = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> tab[i];
	}
	for (int j = k; j < n; j++)
	{
		cout << tab[j] << " ";
	}
	for (int a = 0; a < k; a++)
	{
		cout << tab[a] << " ";
	}
	cout << endl;
    return 0;
}

