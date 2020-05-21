#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long int lli;
void d(string s){
	cout << "Debug: " << s << endl;
}
void solve() {
	int n; cin >> n;
	vector<int> p, m, s;
	for (int i = 1; i <= n; ++i) {
		int v; cin >> v;
		if (v == 1)
			p.push_back(i);
		else if (v == 2)
			m.push_back(i);
		else if (v == 3)
			s.push_back(i);
	}
	int w = min(min(p.size(), m.size()), s.size());
	cout << w << endl;
	for (int i = 0; i < w; ++i) {
		cout << p[i] << " " << m[i] << " " << s[i] << endl;
	}
}
int main() {
	solve();
	return 0;
}