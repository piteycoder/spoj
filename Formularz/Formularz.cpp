// Formularz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <string>

bool check_name(std::string);
bool check_date(std::string);
bool check_year(std::string);
bool check_mon(std::string);
bool check_day(std::string);
int main()
{
	using namespace std;
	string name, surname, date, useless;
	while (cin >> useless >> name >> useless >> surname >> useless >> useless >> date) {
		if (check_name(name) == false)
			cout << "0\n";
		else {
			if (check_name(surname) == false)
				cout << "1\n";
			else {
				if (check_date(date) == false)
					cout << "2\n";
				else
					cout << "3\n";
			}
		}
	}
    return 0;
}
bool check_day(std::string days) {
	int d;
	d = atoi(days.c_str());
	if ((!isdigit(days[0])) || (!isdigit(days[1])))
		return false;
	if ((d >= 1) && (d <= 31))
		return true;
	return false;
}
bool check_mon(std::string month) {
	int m;
	m = atoi(month.c_str());
	if ((!isdigit(month[0])) || (!isdigit(month[1])))
		return false;
	if ((m >= 1) && (m <= 12))
		return true;
	return false;
}
bool check_year(std::string year) {
	int y;
	y = atoi(year.c_str());
	for (int i = 0; i < 4; i++) {
		if (!isdigit(year[i]))
			return false;
	}
	if ((y >= 1900) && (y <= 2000))
		return true;
	return false;
}
bool check_date(std::string date) {
	std::string year;
	for (int i = 0; i < 4; i++)
		year += date[i];
	if (check_year(year) == false)
		return false;
	year = date[5];
	year += date[6];
	if (check_mon(year) == false)
		return false;
	year = date[8];
	year += date[9];
	if (check_day(year) == false)
		return false;
	return true;
}
bool check_name(std::string name) {
	int length = name.length();
	if (!isupper(name[0]))
		return false;
	for (int i = 1; i < length - 1; i++) {
		if (!islower(name[i]))
			return false;
	}
	return true;
}
