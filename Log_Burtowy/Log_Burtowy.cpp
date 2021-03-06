// Log_Burtowy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;
const int SIZE = 9;

float calculate(char *, char *, int, const float *);
float convert(float *);
int main()
{
	char first[SIZE];
	char last[SIZE];
	float length, KmSpeed, MSpeed;
	while (cin >> first >> last >> length) {
		KmSpeed = calculate(first, last, SIZE - 1, &length);
		MSpeed = convert(&KmSpeed);
		cout << fixed << setprecision(1) << KmSpeed << " " << MSpeed << endl;
	}
    return 0;
}
float convert(float *km) {
	return *km / 1.852;
}
float calculate(char *start, char *stop, int ar, const float *length) {
	int seconds, hours, minutes;
	int startTime, stopTime;
	const int hex = 60;

	seconds = ((int)(start[6] - '0') * 10) + ((int)(start[7] - '0'));
	minutes = ((int)(start[3] - '0') * 10 * hex) + ((int)(start[4] - '0') * hex);
	hours = ((int)(start[0] - '0') * 10 * hex*hex) + ((int)(start[1] - '0')*hex*hex);

	startTime = seconds + minutes + hours;

	seconds = ((int)(stop[6] - '0') * 10) + ((int)(stop[7] - '0'));
	minutes = ((int)(stop[3] - '0') * 10 * hex) + ((int)(stop[4] - '0') * hex);
	hours = ((int)(stop[0] - '0') * 10 * hex*hex) + ((int)(stop[1] - '0')*hex*hex);

	stopTime = seconds + minutes + hours;

	int distTime = stopTime - startTime;
	float speed = ((*length / 1000) / distTime) * 3600;
	return speed;
}
