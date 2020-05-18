#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
using namespace std;

void debug(string s) {
	cout << "D: " << s << endl;
}
int main() {
	int n, m;
	cin >> n >> m;
	int* p = new int[m];
	for (int i = 0; i < m; i++)
		cin >> p[i];
	sort(p, p+m);
	int ans = 0;
	bool init = false;
	for (int i = 0; i < m - (n-1); ++i) {
		int end = p[i+(n-1)];
		if (init)
			ans = min(ans, end - p[i]);
		else
			ans = end - p[i];
		init = true;
		// cout << "D: " << p[i] << " " << end << endl;
	}
	cout << ans << endl;
}