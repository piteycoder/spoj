// wspoliniowoscpunktow.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int t, det;
	int ax, ay, bx, by, cx, cy;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> ax >> ay >> bx >> by >> cx >> cy;
		det = (ax*by * 1) + (ay * 1 * cx) + (1 * bx*cy) - ((ay*bx * 1) + (ax * 1 * cy) + (1 * by*cx));
		if (det == 0) { cout << "TAK" << endl; }
		else cout << "NIE" << endl;
	}
    return 0;
}

