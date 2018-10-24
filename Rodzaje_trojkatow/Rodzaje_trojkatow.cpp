// Rodzaje_trojkatow.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
bool brak(int, int, int);
bool pro(int, int, int);
bool roz(int, int, int);
bool ost(int, int, int);
int main()
{
	int a, b, c;
	while (std::cin >> a)
	{
		std::cin >> b >> c;
		if (brak(a, b, c) == 1) std::cout << "brak\n";
		else
		{
			if (pro(a, b, c) == 1) std::cout << "prostokatny\n";
			else if (roz(a, b, c) == 1) std::cout << "rozwartokatny\n";
			else if (ost(a, b, c) == 1) std::cout << "ostrokatny\n";
		}
	}
    return 0;
}
bool ost(int a, int b, int c)
{
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	if ((max*max < a * a + b * b) && (max*max < a * a + c * c) && (max*max < b * b + c * c)) return true;
	return false;
}
bool roz(int a, int b, int c)
{
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	if ((max*max > a * a + b * b) || (max*max > a * a + c * c) || (max*max > b * b + c * c)) return true;
	return false;
}
bool pro(int a, int b, int c)
{
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	if ((max*max == a * a + b * b) || (max*max == a * a + c * c) || (max*max == b * b + c * c)) return true;
	return false;
}
bool brak(int a, int b, int c)
{
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	if ((a + b > max) && (a + c > max) && (b + c > max)) return false;
	return true;
}
