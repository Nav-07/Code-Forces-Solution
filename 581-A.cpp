#include <vector>
#include <iostream>
using namespace std;

int main() {
	int a, b; cin >> a >> b;
	if (a > b) {
		a -= b;
		if (a % 2 != 0)
			a -= a % 2;
		cout << b << " " << a/2 << endl;
	} else if (b > a) {
		b -= a;
		if (b % 2 != 0)
			b -= b % 2;
		cout << a << " " << b/2 << endl;
	} else if (a == b) {
		cout << a << " " << 0 << endl;
	}
	return 0;
}