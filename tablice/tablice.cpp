// tablice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string znak;
	int a, b;
	while (cin >> znak)
	{
		cin >> a >> b;
		switch (znak)
		{
		case '+': cout << a + b << endl;
			break;
		case'-': cout << a - b << endl;
			break;
		case'*': cout << a * b << endl;
			break;
		case'/': cout << a / b << endl;
			break;
		case"%": cout << a % b << endl;
			break;
		}
	}
    return 0;
}

