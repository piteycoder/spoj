// zliczanielinii.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string text;
	int i = 0;
	while (getline(cin, text))
	{
		i++;
	}
	cout << i;
    return 0;
}

