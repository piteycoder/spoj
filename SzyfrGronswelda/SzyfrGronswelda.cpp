// SzyfrGronswelda.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>
std::string itos(int);
std::string Cipher(std::string, std::string);
std::string Decipher(std::string, std::string);
int main()
{
	std::string gron, text, scode;
	int code;
	std::cin >> gron;
	std::cin >> code;
	std::cin >> text;
	scode = itos(code);
	if (code == 0) std::cout << text;
	else
	{
		if (gron == "SZYFRUJ") std::cout << Cipher(scode, text) << std::endl;
		else if (gron == "DESZYFRUJ") std::cout << Decipher(scode, text) << std::endl;
	}
    return 0;
}
std::string itos(int code)
{
	using namespace std;
	ostringstream ss;
	ss << code;
	string str = ss.str();
	return str;
}
std::string Decipher(std::string k, std::string t)
{
	using namespace std;
	int i=0, j = 0;
	int tlength = t.length();
	while (i < tlength)
	{
		if (j == k.length()) j = 0;
		t[i] = t[i] - (k[j] - '0');
		if (t[i] < 65)
			t[i] += 26;
		i++; j++;
	}
	return t;
}
std::string Cipher(std::string k, std::string t)
{
	using namespace std;
	int i=0, j=0;
	int tlength = t.length();
	while(i < tlength)
	{
		if (j == k.length()) j = 0;
		t[i] += k[j] - '0';
		if (t[i] > 90)
			t[i] -= 26;
		i++; j++;
	}
	return t;
}


