// Literki.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>;
#include <string>
const int letters = 26;
using namespace std;

int count(string &line, int);
// tutaj funkcja, która obliczy ile procent każda litera zajmuje
// tutaj funkcja, która wyświetli literki i gwiazdki
int main()
{
	string line;
	int quantity[letters];
	getline(cin, line);
	for (int i = 0; i < letters; i++)
		quantity[i] = count(line, i);

    return 0;
}
int count(string &line, int letter) {
	char let = letter + 'A';
	int length = line.length();
	unsigned count = 0;
	for (int i = 0; i < length; i++) {
		if (line[i] == let) {
			count++;
			line.erase(line.begin() + i);
			i--;
		}
	}
	return count;
}
