// Zamiana_miejsc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);

	x += y; y = x - y; x -= y;

	printf("%d %d", x, y);
    return 0;
}

