#include <iostream>
using namespace std;

string encode(string str, int j)
{
	string result = "";

	for (int i = 0; i < str.length(); i++) {
		if(i >= j && i % j == 0 && str[i] != ' ') {
            if (isupper(str[i]))
			    result += char(int(str[i] + 2 - 65) % 26 + 65);
            else
                result += char(int(str[i] + 2 - 97) % 26 + 97);
        } else {
            result += str[i];
        }
	}

	return result;
}


int main()
{
	string str = "I am a student";
	int j = 2;
	cout << "Text : " << str;
	cout << "\nShift: " << j;
	cout << "\nCipher: " << encode(str, j);
	return 0;
}
