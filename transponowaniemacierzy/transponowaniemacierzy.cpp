// transponowaniemacierzy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	unsigned w, k;
	cin >> w >> k;
	int **tab = new int *[w];
	for (int i = 0; i < w; i++)
	{
		tab[i] = new int[k];
		for (int j = 0; j < k; j++)
		{
			cin >> tab[i][j];
		}
	}
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cout << tab[j][i] << " ";
		}
		cout << endl;
	}
    return 0;
}

