// XV.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
bool div5(char);
bool div3(std::string);
int main()
{
	std::string number;
	int length;
	std::cin >> number;
	while (number!="0")
	{
		length = number.length();
		if ((div5(number[length - 1]) == 1) && (div3(number) == 1)) std::cout << "TAK" << std::endl;
		else std::cout << "NIE" << std::endl;
		std::cin >> number;
	}
    return 0;
}
bool div3(std::string number)
{
	int sum = 0, length = number.length();
	for (int i = 0; i < length; i++)
	{
		sum += number[i] - '0';
	}
	if (sum % 3 == 0) return true;
	return false;
}
bool div5(char digit)
{
	if ((digit == '0') || (digit == '5')) return true;
	return false;
}

