// Sort_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
struct Wsp {
	std::string punkt;
	int x;
	int y;
	long a;
};
long prze(int, int); // zwraca wartość potęgi przekątnej
int main()
{
	int t, n;
	std::cin >> t;
	while (t--)
	{
		std::cin >> n;
		Wsp * sort = new Wsp[n];
		for (int i = 0; i < n; i++)
		{
			std::cin >> sort[i].punkt >> sort[i].x >> sort[i].y;
			sort[i].a = prze(sort[i].x, sort[i].y);
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 1; j < n; j++)
			{
				if (sort[j - 1].a > sort[j].a)
				{
					std::swap(sort[j - 1], sort[j]);
				}
			}
		}
		for (int i = 0; i < n; i++)
			std::cout << sort[i].punkt << " " << sort[i].x << " " << sort[i].y << std::endl;
		delete[] sort;
		std::cout << std::endl;
	}
    return 0;
}
long prze(int a, int b)
{
	return a * a + b * b;
}
