// ptwpz_telefony.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
void Con(std::string);
int main()
{
	int n;
	std::cin >> n;
	std::string word;
	while (n--)
	{
		std::cin >> word;
		Con(word);
		word.clear();
	}
    return 0;
}
void Con(std::string number)
{
	using namespace std;
	char pt[] = { "23456789" };
	int length = number.length();
	for (int i = 0; i < length; i++)
	{
		switch (number[i])
		{
		case 'A': 
		case 'B':
		case 'C': cout << pt[0];
			break;
		case 'D':
		case 'E':
		case 'F': cout << pt[1];
			break;
		case 'G':
		case'H':
		case 'I': cout << pt[2];
			break;
		case 'J':
		case 'K':
		case 'L': cout << pt[3];
			break;
		case 'M':
		case 'N':
		case 'O': cout << pt[4];
			break;
		case 'P':
		case 'R':
		case 'Q':
		case 'S': cout << pt[5];
			break;
		case 'T':
		case 'U':
		case 'V': cout << pt[6];
			break;
		case 'W':
		case 'X':
		case 'Y':
		case 'Z': cout << pt[7];
		}
	}
	cout << endl;
}

