// Parzyste_w_przedziale.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

bool checkAB(const int &, const int &);
int main()
{
	int d;
	cin >> d;
	int a, b, j;
	for (int i = 0; i < d; i++) {
		cin >> a >> b;
		if (checkAB(a, b) == 1) {
			j = a;
			if (j % 2 == 0) {
				for (j = j + 2; j < b; j = j + 2)
					cout << j << " ";
			}
			else
				for (++j; j < b; j = j + 2) {
					cout << j << " ";
				}
			cout << endl;
		}
		else
			cout << "BRAK" << endl;
	}
    return 0;
}
bool checkAB(const int &a, const int &b) {
	if (b <= a)
		return 0;
	if (b % 2 == 0 && a % 2 == 0) {
		if (b - a == 2)
			return 0;
	}
	if ((b % 2 == 0 && a % 2 == 1) || (b % 2 == 1 && a % 2 == 0)) {
		if (b - a == 1)
			return 0;
	}
	return 1;
}
