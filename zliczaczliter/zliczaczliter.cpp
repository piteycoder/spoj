// zliczaczliter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int N, d;
	int licz[52], tab[200];
	for (int i = 0; i < 52; i++)
	{
		licz[i] = 0;
	}
	string znaki;
	cin >> N;
	N++;
	while(N--)
	{
		getline(cin, znaki);
		d = znaki.length();
		for (int j = 0; j < d; j++)
		{
			tab[j] = znaki[j];
			for (int k = 65, o = 26; k < 91; k++, o++)
			{
				if (tab[j] == k) licz[o]++;
			}
			for (int k = 97, o = 0; k < 123; k++, o++)
			{
				if (tab[j] == k) licz[o]++;
			}
		}
		cin.clear();
	}
	for (int i = 0; i < 52; i++)
	{
		if (licz[i] > 0)
		{
			if (i < 26) cout << char(i + 97) << " " << licz[i] << endl;
			else if (i >= 26) cout << char(i + 39) << " " << licz[i] << endl;
		}
	}
    return 0;
}

