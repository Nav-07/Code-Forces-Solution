#include <iostream>
#include <string>
using namespace std;

int main() {
	string s; cin >> s;
	int ascii = s[0];
	if (ascii >= 97 && ascii <= 122)
		s[0] = ascii-32;
	cout << s << endl;
	return 0;
}