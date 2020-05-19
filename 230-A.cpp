#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int s, n;
	string ans = "NO";
	
	cin >> s >> n;
	vector< pair<int, int> > d;
	for (int i = 0; i < n; ++i) {
		int v, z; cin >> v >> z;
		d.push_back(make_pair(v, z));
	}
	sort(d.begin(), d.end());
	for (int i = 0; i < d.size(); ++i) {
		if (d[i].first < s) {
			ans = "YES";
			s += d[i].second;
		} else if (d[i].first >= s) {
			ans = "NO";
			break;
		}
	}
	cout << ans << endl;
	return 0;
}