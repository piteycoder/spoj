// skarbfinder.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int d, N, a, b;
	long long suma, sumb;
	cin >> d;
	for (int i = 0; i < d; i++)
	{
		suma = 0; sumb = 0;
		cin >> N;
		for (int j = 0; j < N; j++)
		{
			cin >> a >> b;
			if (a == 0) { suma = suma + b; }
			else if (a == 1) { suma = suma - b; }
			else if (a == 2) { sumb = sumb + b; }
			else if (a == 3) { sumb = sumb - b; }
		}
		if ((suma > 0) && (sumb > 0))
		{
			cout << "0 " << suma << endl;
			cout << "2 " << sumb << endl;
		}
		else if ((suma > 0) && (sumb < 0))
		{
			cout << "0 " << suma << endl;
			cout << "3 " << sumb * (-1) << endl;
		}
		else if ((suma < 0) && (sumb < 0))
		{
			cout << "1 " << suma * (-1) << endl;
			cout << "3 " << sumb * (-1) << endl;
		}
		else if ((suma < 0) && (sumb > 0))
		{
			cout << "1 " << suma * (-1) << endl;
			cout << "2 " << sumb << endl;
		}
		else if ((suma > 0) && (sumb == 0))
		{
			cout << "0 " << suma << endl;
		}
		else if ((suma < 0) && (sumb == 0))
		{
			cout << "0 " << suma * (-1) << endl;
		}
		else if ((suma == 0) && (sumb < 0))
		{
			cout << "3 " << sumb * (-1) << endl;
		}
		else if ((suma == 0) && (sumb > 0))
		{
			cout << "3 " << sumb << endl;
		}
		else { cout << "studnia" << endl; }
	}
	return 0;
}

