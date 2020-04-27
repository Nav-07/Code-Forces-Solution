#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int x = 0;

	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s = "";
		cin >> s;
		for (int j = 0; j < s.size(); j++) {
			if (s[j] == '+') {
				x++;
				break;
			}
			else if (s[j] == '-') {
				x--;
				break;
			}
		}
	}
	cout << x << endl;
}