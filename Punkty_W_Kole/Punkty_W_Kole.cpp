// Punkty_W_Kole.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int t, r, pts;
	cin >> t;
	for (int i = 0; i < t; i++) {
		pts = 0;
		cin >> r;
		for (int j = r * (-1); j <= r; j++) {
			for (int k = r * (-1); k <= r; k++) {
				if (j*j + k * k <= r * r)
					pts++;
			}
		}
		cout << pts << endl;
	}
    return 0;
}

