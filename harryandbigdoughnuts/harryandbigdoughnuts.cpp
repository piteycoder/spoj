// harryandbigdoughnuts.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		unsigned c, k, w;
		cin >> c >> k >> w;
		if ((c*w) > k) { cout << "no"<<endl; }
		else cout << "yes" << endl;
	}
    return 0;
}

