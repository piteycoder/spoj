// Bajtockie_Swieto_Trojkata.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

bool tri(int a, int b, int c) {
	if ((a + b <= c) || (a + c <= b) || (b + c <= a)) return false;
	return true;
}
double surf(int, int, int);
int main()
{
	using namespace std;
	int t, n, a, b, c, d;
	double k, cal, mass;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cal = 0;
		cin >> n >> k;
		k /= 10;
		for (int j = 0; j < n; j++) {
			cin >> a >> b >> c;
			if (tri(a, b, c) == 1)
				cal += surf(a, b, c);
		}
		mass = cal * k;
		d = round(mass);
		cout << d << endl;
	}
    return 0;
}
double surf(int a, int b, int c) {
	double ho = double(a + b + c) / 2;
	double sr;
	sr = sqrt(ho*(ho - a)*(ho - b)*(ho - c));
	return sr;
}
