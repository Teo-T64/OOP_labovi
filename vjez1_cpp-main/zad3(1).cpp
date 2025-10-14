//3.
/*
#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	for (auto& n : s) {
		if (isalpha(n)) {
			if (islower(n)) {
				n = toupper(n);
			}
		}
		else if (isdigit(n)){
			n = '*';
		}
		else if (n == ' ' || n == '\t'){
			n = '_';
		}
	}
	cout << s << endl;
}
*/
