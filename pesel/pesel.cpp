// pesel.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string pesel;
	int t, suma=0;
	int cyfra[11];
	int times[11] = { 1,3,7,9,1,3,7,9,1,3,1 };
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> pesel;
		suma = 0;
		for (int j = 0; j < 11; j++)
		{
			cyfra[j] = static_cast<int>(pesel[j]);
			suma += ((cyfra[j]-'0') * times[j]);
		}
		if ((suma % 10 == 0)&&(suma>0)) { cout << "D"; }
		else { cout << "N"; }
		cout << endl;
		cin.clear();
	}
    return 0;
}

