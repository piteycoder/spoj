// Test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

void test();
unsigned int darjar(std::string, std::string, std::string);
int main()
{
	test();
    return 0;
}
unsigned int darjar(std::string darek, std::string jarek, std::string marek) {
	unsigned int sum = 0;
	int length = darek.length();
	for (int i = 0; i < length; i++) {
		if (jarek[i] == marek[i]) {
			if (jarek[i] != darek[i]) sum += 2;
		}
		else {
			if (jarek[i] != darek[i]) sum++;
			else if (marek[i] != darek[i]) sum++;
		}
	}
	return sum;
}
void test() {
	using namespace std;
	string dar, jar, mar;
	cin >> dar >> jar >> mar;
	cout << darjar(dar, jar, mar) << endl;
}
