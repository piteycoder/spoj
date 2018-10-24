// Konkurs_Pseudomatematyczny.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>

int main()
{
	using namespace std;
	int t, n, max, stop;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		int *tab = new int[n];
		for (int j = 0; j < n; j++) 
			cin >> tab[j];
		for (int a = 0; a < n - 1; a++) {
			for (int b = 0; b < n - 1; b++) {
				if (tab[b] > tab[b + 1])
					swap(tab[b], tab[b + 1]);
			}
		}	
		max = tab[n - 1];
		if (max == tab[0]) {
			for (int j = 0; j < n; j++)
				cout << tab[j] << " ";
		}
		else {
			for (int j = n - 1; j >= 0; j--) {
				if (tab[j] == max)
					cout << tab[j] << " ";
				else {
					stop = j;
					break;
				}
			}
			for (int j = 0; j <= stop; j++)
				cout << tab[j] << " ";
			delete[]tab;
		}
		cout << endl;
	}
    return 0;
}

