// BMI.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

struct bmi {
	string name;
	int mass;
	float height;
	float b;
};

int main()
{
	int t;
	cin >> t;
	bmi *tab = new bmi[t];
	for (int i = 0; i < t; i++) {
		cin >> tab[i].name >> tab[i].mass >> tab[i].height;
		tab[i].b = tab[i].mass / ((tab[i].height/100)*(tab[i].height/100));
	}
	cout << "niedowaga\n";
	for (int i = 0; i < t; i++) 
		if (tab[i].b < 18.5) 
			cout << tab[i].name<<endl; 
	cout << "\nwartosc prawidlowa\n";
	for (int i = 0; i < t; i++)
		if ((tab[i].b >= 18.5) && (tab[i].b < 25)) 
			cout << tab[i].name<<endl;
	cout << "\nnadwaga\n";
	for (int i = 0; i < t; i++)
		if (tab[i].b >= 25)
			cout << tab[i].name<<endl;
	delete[]tab;
    return 0;
}

