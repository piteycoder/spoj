// Prezent.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	long long gift_p, max, maxp;
	cin >> gift_p;
	if (gift_p == 0)
		cout << gift_p << endl;
	else {
		max = gift_p;
		maxp = gift_p;
		while (gift_p != 0) {
			if (gift_p >= max && maxp != max) {
				maxp = max;
				max = gift_p;
			}
			else if (gift_p >= max && maxp == max)
				max = gift_p;
			else if (gift_p >= maxp && gift_p < max)
				maxp = gift_p;
			else if (gift_p < maxp && maxp == max)
				maxp = gift_p;
			cin >> gift_p;
		}
		cout << maxp << endl;
	}
    return 0;
}

