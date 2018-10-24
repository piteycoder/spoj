// zliczanieliczbiwyrazow.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
int ws(std::string);
int ns(std::string);
int main()
{
	std::string line;
	while (std::getline(std::cin,line))
	{
		std::cout << ns(line) << " " << ws(line) << std::endl;
	}
    return 0;
}
int ns(std::string line)
{
	int length = line.length();
	int words = 0, i = 0;
	for (i; i < length; i++)
	{
		while ((line[i] >= '0') && (line[i] <= '9'))
		{
			i++;
			if (!((line[i] >= '0') && (line[i] <= '9')))
				words++;
		}
		
	}
	return words;
}
int ws(std::string line)
{
	int length = line.length();
	int words = 0, i = 0;
	for (i; i < length; i++)
	{
		while (((line[i] >= 'a') && (line[i] <= 'z')) || ((line[i] >= 'A') && (line[i] <= 'Z')))
		{
			i++;
			if (!(((line[i] >= 'a') && (line[i] <= 'z')) || ((line[i] >= 'A') && (line[i] <= 'Z'))))
				words++;
		}
	}
	return words;
}


