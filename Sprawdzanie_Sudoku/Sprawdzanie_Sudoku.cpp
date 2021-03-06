// Sprawdzanie_Sudoku.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

const int ssize = 9;

int main()
{
	using namespace std;
	int t, b;
	int countlines[ssize], countcolumns[ssize];
	int sudoku[ssize][ssize];
	cin >> t;
	while (t--) {
		b = 0;
		for (int j = 0; j < ssize; j++) {
			for (int k = 0; k < ssize; k++) {
				cin >> sudoku[j][k];
				if ((sudoku[j][k] < 1) || (sudoku[j][k] > 9)) {
					b++; break;
				}
			}
			if (b != 0) {
				break;
			}
		}
		if (b != 0) {
			cout << "NIE\n";
		}
		else {
			for (int j = 0; j < ssize; j++) {
				for (int i = 0; i < ssize; i++) {
					countlines[i] = 0;
					countcolumns[i] = 0;
				}
				for (int k = 0; k < ssize; k++) {
					if ((countlines[(sudoku[j][k] - 1)] > 0) || (countcolumns[(sudoku[k][j] - 1)] > 0)) {
						b++; break;
					}
					else {
						countlines[(sudoku[j][k] - 1)]++;
						countcolumns[(sudoku[k][j] - 1)]++;
					}
				}
				if (b != 0)
					break;
			}
			if (b == 0)
				cout << "TAK\n";
		}
	}
    return 0;
}

