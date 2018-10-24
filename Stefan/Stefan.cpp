// Stefan.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int n;
	int city;
	long long profit = 0, max = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> city;
		profit += city;
		if (profit > max) { max = profit; }
		if (profit < 0) profit = 0;
	}
	std::cout << max << std::endl;
    return 0;
}

