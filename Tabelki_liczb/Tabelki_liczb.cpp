// Tabelki_liczb.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int t, l, k;
	std::cin >> t;
	for (int i = 0; i < t; i++)
	{
		std::cin >> l >> k;
		int **tab = new int*[l];
		for (int j = 0; j < l; j++)
			tab[j] = new int[k];
		for (int a = 0; a < l; a++)
		{
			for (int b = 0; b < k; b++)
				std::cin >> tab[a][b];
		}
		for (int a = 0; a < 1; a++)
		{
			for (int b = 1; b < k; b++)
				std::cout << tab[a][b] << " ";
			std::cout << tab[a + 1][k - 1] << std::endl;
		}
		for (int a = 1; a < l - 1; a++)
		{
			std::cout << tab[a - 1][0] << " ";
			for (int b = 1; b < k - 1; b++)
				std::cout << tab[a][b] << " ";
			std::cout << tab[a+1][k-1] << std::endl;
		}
		for (int a = l - 1; a < l; a++)
		{
			std::cout << tab[a - 1][0] << " ";
			for (int b = 0; b < k - 1; b++)
				std::cout << tab[a][b] << " ";
			std::cout << std::endl;
		}
		for (int j = 0; j < l; j++)
			delete[]tab[j];
		delete[]tab;
	}
    return 0;
}

