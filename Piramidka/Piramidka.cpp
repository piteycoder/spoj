#include <iostream>
#include <string>

void print(std:: string word, unsigned short length);
int main()
{
	using namespace std;
	unsigned short length;
	(cin >> length).get();
	string word;
	cin >> word;
	print(word, length);
    return 0;
}

void print(std::string word, unsigned short length) {
    using namespace std;
	string buffer;
	for (int i = 0; i < length; i++)
        buffer[i] = '*';
    for (int i = length / 2, int j = length / 2; i < length; i++, j--){
        buffer[i] = word[i];
        buffer[j] = word[j];
        cout << buffer << endl;
    }
}
