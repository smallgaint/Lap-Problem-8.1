#include <string>
#include <iostream>

using namespace std;

int countVowel(string str);

int main() {
	string str = "Hello, World!";
	cout << countVowel(str) << endl;

	return 0;
}

int countVowel(string str) {
	int result = 0;
	for (char c : str) {
		c = tolower(c);
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
			result++;
		}
	}

	return result;
}