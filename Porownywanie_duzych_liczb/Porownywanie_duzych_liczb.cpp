// Porownywanie_duzych_liczb.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using std::string;

bool compare(char);
void lfcheck(string, int);
int main()
{
	using namespace std;
	string line;
	int length;
	while (getline(cin, line)) {
		length = line.length();
		cout <<  << endl;
	}
    return 0;
}
bool compare(char x) {

}
void lfcheck(string line, int length) {
	int a;
	for (int i = 0; i < length < i++) {
		if (line[i] != ' ')
			continue;
		else {
			a = i + 1; break;
		}
	}
}
