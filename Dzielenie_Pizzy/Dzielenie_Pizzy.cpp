// Dzielenie_Pizzy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>

const double pi = acos(-1.0);

bool czypodziel(int a) {
	return a % 2;
}
int main()
{
	using namespace std;
	int t, n;
	long long  d;
	double cut;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> d >> n;
		if (czypodziel(n) == false) {
			n = n / 2;
			cut = (d*pi) / (n * 2);
			
		}
		else {
			cut = (d*pi) / (n * 2);
			
		}
		cout << fixed << setprecision(3) << cut << " ";
		cout << n << endl;
	}
    return 0;
}

