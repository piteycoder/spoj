// Statystyka_Pozycyjna.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
int main()
{
	using namespace std;
	int n, a, max;
	vector<int>tab;
	while (cin >> n)
	{
		a = 0;
		
		for (int i = 0; i < n - 1; i++)
			for (int j = 0; j < n - 1; j++) {
				if (tab[j] > tab[j + 1]) swap(tab[j], tab[j + 1]);
			}
		max = tab[n - 1];
		for (int i = n - 1; i <= 0; i--)
			if (tab[i] == max) a++;
	}
    return 0;
}

