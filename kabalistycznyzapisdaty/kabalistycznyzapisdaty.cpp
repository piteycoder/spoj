// kabalistycznyzapisdaty.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int decoder(char x);
int main()
{
	string word;
	int suma = 0, length;
	cin >> word;
	length = word.length();
	for (int i = 0; i < length; i++)
	{
		suma += decoder(word[i]);
	}
	cout << suma << endl;
    return 0;
}
int decoder(char x)
{
	int a = 1, b = 20, c = 200;
	for (int i = 97; i <= 107; i++)
	{
		if (i == 106) i++;
		if (x == i) return a;
		a++;
	}
	for (int i = 108; i <= 116; i++)
	{
		if (x == i) return b;
		b += 10;
	}
	for (int i = 118; i <= 122; i++)
	{
		if (i == 119) i++;
		if (x == i) return c;
		c += 100;
	}
}

