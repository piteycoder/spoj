// wycinanieliterek.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string word;
	string ch;
	int length, i, a;
	while (cin >> ch)
	{
		i = 0; length = 0;
		getline(cin,word);
		length = word.length();
		while (i < length)
		{
			a = word[i];
			if (word[i] == ch[0])
			{
				word.erase(i, 1);
				if (static_cast<int>(word[i]) == a) { i--; }
			}
			i++;
		}
		cout << word << endl;
		word.clear();
		ch.clear();
		string word, ch;
	}
    return 0;
}

