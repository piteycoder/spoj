// prostedodawaniepiotrusia2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
using namespace std;
string itoa(int x) // zamienia int na string
{
	ostringstream ss;
	ss << x;
	string str = ss.str();
	ss.clear();
	return str;
}
int reverse(string ToReverse) // odwraca liczbe
{
	int d, i=0;
	string reversed
	d = inverted.length();
	while (i < d)
	{
		reversed[i] = ToReverse[d - 1];
		i++; d--;
	}
	d = atoi(reversed.c_str());
	return d;
}
bool check(string palindrom) // sprawdza czy liczba jest palindromem
{
	int d;
	d = palindrom.length();
	for (int i = 0, int j < d - 1; i < j; i++, j--)
	{
		if (palindrom[i] != palindrom[j]) { return false; break; }
	}
	return true;
}
int main()
{
	string number, rvrsd;
	unsigned short t, cycles;
	int dn, dr, ds, length, sum, j , k ;
	bool check;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> number;
		cycles = 0; sum = 0;
		if (number[1] == '\0') { cout << number << " " << cycles << endl; }
		else
		{
			if (number[0] == number[1]) { cout << number << " " << cycles << endl; }
			else
			{
					dn = atoi(number.c_str());
					dr = reverse(number);
					ds = dn + dr;
					sum += ds;
					cycles++;
					number = itoa(ds);
				
				} while (check);
				cout << sum << " " << cycles << endl;
			}
		}
	}
    return 0;
}

