// tozadaniejestlatwe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

void test();
bool check(std::string, std::string);
int main()
{
	using namespace std;
	test();
    return 0;
}
bool check(std::string w1, std::string w2) {
	int length1 = w1.length();
	int length2 = w2.length();
	int j = 0;
	for (int i = 0; i < length1; i++) {
		if (w1[i] == w2[j]) j++;
	}
	if (j == length2) return true;
	return false;
}
void test() {
	int t;
	std::string word1, word2;
	std::cin >> t;
	for (int i = 0; i < t; i++)
	{
		std::cin.ignore(); std::cin.clear();
		std::cin >> word1 >> word2;
		if (check(word1, word2) == true) std::cout << "Tak\n";
		else if (check(word1, word2) == false) std::cout << "Nie\n";
	}
}
