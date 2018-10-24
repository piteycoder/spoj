// Punkty_w_okregu.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>

struct wsp {
	int x;
	int y;
};
std::string delta(int, int, int, int, int);
int main()
{
	int x, y, r;
	std::cin >> x >> y >> r;
	r = r * r;
	int n;
	std::cin >> n;
	wsp *tab = new wsp[n];
	for (int i = 0; i < n; i++)
	{
		std::cin >> tab[i].x >> tab[i].y;
		std::cout << delta(tab[i].x,tab[i].y,r,x,y) << std::endl;
	}
	delete[]tab;
    return 0;
}
std::string delta(int a, int b, int r, int x, int y)
{
	int d = pow(x - a, 2) + pow(y - b, 2);
	if (d < r) return "I";
	else if (d > r) return "O";
	return "E";
}