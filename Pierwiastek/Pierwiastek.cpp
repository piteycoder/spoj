// Pierwiastek.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int square(int a) {
	return (int)sqrt(a);
}
int power(int a) {
	return (int)pow(square(a), 2);
}
int main()
{
	int n;
	int a, squared;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a <= 0)
			cout << "NIE\n";
		else {
			squared = square(a);
			if (power(a) == a)
				cout << "TAK\n";
			else
				cout << "NIE\n";
		}
	}
    return 0;
}

