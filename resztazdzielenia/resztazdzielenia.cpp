// resztazdzielenia.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int d, r;
	float c, a, b;
	cin >> d;
	for (int i = 0; i < d; i++)
	{
		cin >> a >> b;
		if ((a>=0)&&(b>=0))
		{
			c = floor(a / b);
			r = a - (c*b);
			cout << r << endl;
		}
		else if ((a<0)&&(b<0))
		{
			c = ceil(a / b);
			r = a - (c*b);
			cout << r << endl;
		}
		else if ((a >= 0) && (b < 0))
		{
			c = ceil(a / b);
			r = a - (c*b);
			cout << r << endl;
		}
		else
		{
			c = floor(a / b);
			r = a - (c*b);
			cout << r << endl;
		}
	}
    return 0;
}

