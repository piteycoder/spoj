// Alfabet_Morsa.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cctype>

int find_letter(char);
int main()
{
	using namespace std;
	string mors[]{ ".-","-...","-.-.","-..",".",".-..","--.","....","..",".---","-.-","..-.","--","-.","---",".--.",
	"--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." };
	string line;
	int length;
	while (getline(cin, line)) {
		length = line.length();
		for (int i = 0; i < length; i++) {
			if (find_letter(line[i]) == ' ')
				cout << "/";
			else
				cout << mors[find_letter(line[i])] << "/";
		}
		cout << endl;
	}
    return 0;
}
int find_letter(char ch) {
	int letter = 0;
	if (ch == ' ')
		return int(ch);
	if (islower(ch)) {
		for (int i = 'a'; i <= 'z'; i++) {
			if (ch == i)
				return letter;
			letter++;
		}
	}
	else {
		for (int i = 'A'; i <= 'Z'; i++) {
			if (ch == i)
				return letter;
			letter++;
		}
	}
}
