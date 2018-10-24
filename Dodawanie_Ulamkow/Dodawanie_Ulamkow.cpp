// Dodawanie_Ulamkow.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

long NWW(long, long);
int main()
{
	long li1, li2, mi1, mi2;
	char slash;
	cin >> li1;
	cin.get(slash);
	cin >> mi1;
	cin.get();
	cin >> li2;
	cin.get(slash);
	cin >> mi2;
	long nww = NWW(mi1, mi2);
	cout << li1 << slash << mi1 << " + " << li2 << slash << mi2 << " = ";
	cout << (nww / mi1)*li1 << slash << (nww / mi2)*li2 << endl;
	return 0;
}
long NWW(long a, long b) {
	long ab = a * b;
	long t;
	while (b) {
		t = b;
		b = a % b;
		a = t;
	}
	ab /= a;
	return ab;
}

