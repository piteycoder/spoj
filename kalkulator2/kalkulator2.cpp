// kalkulator2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string c;
	int a, b;
	int regi[10];
	while (cin >> c)
	{
		cin >> a >> b;
		if (c == "z") { regi[a] = b; }
		else if (c == "-") cout << regi[a] - regi[b] << endl;
		else if (c == "*") cout << regi[a] * regi[b] << endl;
		else if (c == "/") cout << regi[a] / regi[b] << endl;
		else if (c == "%") cout << regi[a] % regi[b] << endl;
		else cout << regi[a] + regi[b] << endl;
		
	}
    return 0;
}

