// prostedodawaniepiotrusia3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
using namespace std;
string ReverseString(string reversed); //odwracanie liczby
bool CheckPalindrom(string palindrom); //sprawdzanie czy liczba jest palindromem
string GetPalindrom(string x, string y); //sumowanie dwóch liczb i zwracanie ich w formie stringa
int main()
{
	string number;
	unsigned short test, cycles;
	cin >> test;
	for (int i = 0; i < test; i++)
	{
		cycles = 0; 
		cin >> number;
		while (CheckPalindrom(number) == 0)
		{
			number = GetPalindrom(number, ReverseString(number));
			cycles++;
		}
		cout << atoi(number.c_str()) << " " << cycles << endl;
		number.clear();
	}
	return 0;
}
string GetPalindrom(string x, string y)
{
	int a, b, add = 0;
	ostringstream ss;
	a = atoi(x.c_str());
	b = atoi(y.c_str());
	add = a + b;
	ss << add;
	return ss.str();
}
bool CheckPalindrom(string palindrom)
{
	int length, i = 0;
	length = palindrom.length();
	while (i <= length/2)
	{
		if (palindrom.at(i) != palindrom.at(length - 1 - i)) return false;
		return true;
		i++;
	}
}
string ReverseString(string reversed)
{
	string number; int length, i = 0;
	length = reversed.length();
	while (i < length)
	{
		number[i] = reversed[length - 1 - i];
		i++;
	}
	return number;
}

