#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t = 0; cin >> t;
	while (t--) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		if (a > b) swap(a, b);
		if (c > d) swap(c, d);
		if (b == d && a+c == b) 
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}