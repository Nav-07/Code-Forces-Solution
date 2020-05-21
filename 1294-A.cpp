#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
typedef long long int lli;
void d(string s){
	cout << "Debug: " << s << endl;
}
void solve() {
	int t; cin >> t;
	while (t--) {
		int a, b, c, n, i;
		cin >> a >> b >> c >> n;
		int m = max(max(a, b), c);
		int sum=(m-a)+(m-b)+(m-c);
		if (n - sum >= 0 && (n-sum)%3==0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}
int main() {
	solve();
	return 0;
}