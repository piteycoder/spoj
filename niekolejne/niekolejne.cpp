// niekolejne.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n == 0) { cout << n << endl; }
	else if (n < 3) { cout << "NIE" << endl; }
	else if (n == 3) { cout << "1 3 0 2" << endl; }
	else 
	{
		for (int i = 0; i <= n; i = i + 2)
		{
			cout << i << " ";
		}
		for (int i = 1; i <= n; i = i + 2)
		{
			cout << i << " ";
		}
		cout << endl;
	}
    return 0;
}

