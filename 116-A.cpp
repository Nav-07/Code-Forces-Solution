#include <iostream>
#include <string>
using namespace std;

void debugLog(string s) {
	cout << "Debug: " << s << endl;
}
int main() {
	int n = 0;
	int a = 0, b = 0;
	int max = 0, prev = 0, ans = 0;
	
	cin >> n;
	while (n--) {
		cin >> a >> b;
		max -= a;
		max += b;
		if (ans < max)
			ans = max;
		else if (prev == max)
			;
		prev = max;
		a = 0; b = 0;
	}
	cout << ans << endl;
}