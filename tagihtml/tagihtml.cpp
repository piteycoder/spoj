// tagihtml.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
string Big(string html);
int main()
{
	string words;
	while (getline(cin, words))
	{
		cout << Big(words) << endl;
		words.clear();
	}
    return 0;
}
string Big(string html)
{
	const int change = 32;
	int length = html.length();
	for (int i = 0; i < length; i++)
	{
		if (html[i] == '<')
		{
			for (int j = i+1; j < length; j++)
			{
				if (html[j] == '>') { i = j; break; }
				if ((int(html[j])>96) && (int(html[j])<123))
				html[j] = html[j] - change;
			}
		}
	}
	return html;
}

