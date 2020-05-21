#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, ans(0);
	string s;
	
	cin >> n >> s;
	int xCount = 0;
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == 'x')
			++xCount;
		if (i==s.size()-1 || s[i] != 'x') {
			if (xCount >= 3) {
				ans += xCount-2;
				xCount = 0;
			} else {
				xCount = 0;
			}
		}
	}
	cout << ans << endl;
	return 0;
}