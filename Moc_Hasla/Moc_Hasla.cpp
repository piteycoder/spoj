// Moc_Hasla.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void count(const string &, int*, int*, int*, int*);
bool setPower(int*, int*, int*, int*);
int main()
{
	string password;
	int t;
	int big, small, digits, other;
	(cin >> t).get();
	for (int i = 0; i < t; i++) {
		big = 0, small = 0, digits = 0, other = 0;
		cin >> password;
		count(password, &big, &small, &digits, &other);
		//if (setPower(&big, &small, &digits, &other) == 1)
			//cout << password;
		cout << big << " " << small << " " << digits << " " << other;
		cout << endl;
	}
    return 0;
}
bool setPower(int* big, int* small, int* digits, int* other) {
	if (big == 0)
		return 0;
	if (small == 0)
		return 0;
	if (digits == 0)
		return 0;
	if (other == 0)
		return 0;
	return 1;
}
void count(const string& password, int* big, int* small, int* digits, int* other) {
	int i = 0;
	while (password[i] != '\0') {
		if (isupper(password[i]) == 1)
			*big++;
		else if (islower(password[i]) == 1)
			*small++;
		else if (isdigit(password[i]) == 1)
			*digits++;
		else if (ispunct(password[i]) == 1)
			*other++;
		else if (isspace(password[i]) == 1)
			*other++;
		i++;
	}
}
