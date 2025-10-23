#include <string>
#include <iostream>

using namespace std;

int countCharacter(string str);

int main() {
	string str = "Hello, World!";
	cout << countCharacter(str) << endl;

	return 0;
}

int countCharacter(string str) {
	return str.length();
}