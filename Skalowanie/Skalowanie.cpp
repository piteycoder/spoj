// Skalowanie.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void print(const string &w, unsigned short t);
void scale(const string &, int, short);
int main()
{
	string word;
	cin >> word;
	unsigned short scaleTimes;
	cin >> scaleTimes;
	print(word, scaleTimes);
    return 0;
}
void scale(const string &w, int l, short m) {
	if (m > 0) {
		for (int i = 0; i < l; i++) {
			cout << w[i];
			if (i == l - 1)
				break;
			for (int j = 1; j < m; j++)
				cout << " ";
		}
	}
	else {
		for (int i = l - 1; i >= 0; i--) {
			cout << w[i];
			if (i == 0)
				break;
			for (int j = -1; j > m; j--)
				cout << " ";
		}
	}
}
void print(const string &w, unsigned short t) {
	string temp = w;
	int length = w.length();
	short s;
	for (int i = 0; i < t; i++) {
		cin >> s;
		if (s == 0)
			cout << w[length - 1];
		else
			scale(temp, length, s);
		if (i == t - 1)
			break;
		else
			cout << endl;
	}
}
