// PTwPZ_Kalkulator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
	using namespace std;
	int t, j, length;
	string line;
	int result;
	cin >> t;
	cin.ignore();
	for (int i = 0; i < t; i++)
	{
		j = 0;
		getline(cin, line);
		result = line[j] - '0';
		length = line.length();
		while (++j < length) {
			if (line[j] == '+') 
				result += line[++j] - '0';
			if (line[j] == '-')
				result -= line[++j] - '0';
		}
		cout << result << endl;
	}
	return 0;
	
}
