// tablica.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector <int> tab;
	int a;
	while (cin >> a)
	{
		tab.push_back(a);
	}
	for (int i = tab.size() - 1; i >= 0; i--)
	{
		cout << tab[i] << " ";
	}

    return 0;
}

