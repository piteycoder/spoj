// Skracanie_Identyfikatorow.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cctype>

std::string delete_floor(std::string, int, int);
std::string delete_numbers(std::string, int, int);
std::string delete_vowels(std::string, int, int);
std::string delete_letters(std::string, int, int);
int main()
{
	using namespace std;
	int length, slength;
	string id;
	cin >> length;
	cin >> id;
	slength = id.length();
	if (slength <= length)
		cout << id << endl;
	else {
		id = delete_floor(id, slength, length);
		slength = id.length();
		if (slength <= length)
			cout << id << endl;
		else {
			id = delete_numbers(id, slength, length);
			slength = id.length();
			if (slength <= length)
				cout << id << endl;
			else {
				id = delete_vowels(id, slength, length);
				slength = id.length();
				if (slength <= length)
					cout << id << endl;
				else
					cout << delete_letters(id, slength, length) << endl;
			}
		}
	}
    return 0;
}
std::string delete_letters(std::string with_letters, int slength, int length) {
	for (int i = slength - 2; i >= 0; i--) {
		if (slength > length) {
			with_letters.erase(with_letters.begin() + i);
			slength = with_letters.length();
		}
		else break;
	}
	return with_letters;
}
std::string delete_vowels(std::string with_vowels, int slength, int length) {
	int a = 0;
	std::string vowels = { "AaEeIiOoUuYy" };
	for (int i = 0; i < slength; i++) {
		for (int j = 0; j < 12; j++) {
			if (with_vowels[i] == vowels[j]) {
				a = i + 1; break;
			}
		}
		if (a > 0)
			break;
	}
	for (int i = a; i < slength; i++) {
		for (int j = 0; j < 12; j++) {
			if (with_vowels[i] == vowels[j]) {
				with_vowels.erase(with_vowels.begin() + i);
				i--;
				slength = with_vowels.length();
			}
		}
		if (slength == length)
			return with_vowels;
	}
	return with_vowels;
}
std::string delete_numbers(std::string with_numbers, int slength, int length) {
	for (int i = slength - 1; i >= 0; i--) {
		if (isdigit(with_numbers[i])) {
			with_numbers.erase(with_numbers.begin() + i);
			slength = with_numbers.length();
		}
		if (slength == length)
			return with_numbers;
	}
	return with_numbers;
}
std::string delete_floor(std::string with_floor, int slength, int length) {
	for (int i = slength - 1; i >= 0; i--) {
		if (with_floor[i] == '_') {
			with_floor.erase(with_floor.begin() + i);
			slength = with_floor.length();
		}
		if (slength == length)
			return with_floor;
	}
	return with_floor;
}
