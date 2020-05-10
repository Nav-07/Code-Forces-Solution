#include <iostream>
#include <string>
using namespace std;

int main() {
	string s; cin >> s;
	size_t found = s.find("0000000");
	size_t found2 = s.find("1111111");
	if (found != string::npos || found2 != string::npos)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}