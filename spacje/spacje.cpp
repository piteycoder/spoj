// spacje.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string sms;
	const int change = 32;
	while (getline(cin, sms))
	{
		for (int i = 0; i < sms.length(); i++)
		{
			if ((int)sms[i] == 32) 
			{ 
				sms.erase(i, 1); 
				if ((sms[i] > 96) && (sms[i] < 123))
				{
					sms[i] -= change;
				}
				i--;
			}
		}
		cout << sms << endl;
		sms.clear();
	}
    return 0;
}

