#include <iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;

	unsigned int total = 0;
	for (unsigned int i = 0; i < n; i++) {
		char a, b, c;
		cin >> a >> b >> c;

		unsigned int count = 0;
		if (a == '1')
			count++;
		if (b == '1')
			count++;
		if (c == '1')
			count++;

		if (count >= 2)
			total++;
	}

	cout << total << endl;
}