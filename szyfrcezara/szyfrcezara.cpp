// szyfrcezara.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string szyfr;
	int asc, i, d;
	while (getline(cin, szyfr))
	{
		d = szyfr.length();
		i = 0;
		int *a = new int[d];
		while (i < d)
		{
			asc = szyfr[i];
			a[i] = asc;
			if (a[i] == 90) { a[i] = 67; }
			else if (a[i] == 89) { a[i] = 66; }
			else if (a[i] == 88) { a[i] = 65; }
			else if (a[i] == 32) { a[i] = 32; }
			else { a[i] = a[i] + 3; }
			szyfr[i] = a[i];
			cout << szyfr[i];
			i++;
		}
		cout << endl;
		delete[]a;
	}
    return 0;
}

