// flamaster.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
void Shorter(string word);
int main()
{
	int C;
	string wyraz;
	cin >> C;
	for (int i = 0; i < C; i++)
	{
		cin >> wyraz;
		Shorter(wyraz);
	}
    return 0;
}
void Shorter(string word)
{
	int a; char check;
	int length;
	length = word.length();
	for (int i = 0; i < length; i++)
	{
		a = 0; 
		check = word[i];
		while (check == word[i])
		{
			i++; a++;
		}
		if (a > 2) { cout << check << a; i--; }
		else if (a == 2) { cout << check << check; i--; }
		else { cout << check; i--; }
	}
	cout << endl;
}

