#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	vector<int> a;
	for (int i = 0; i < n; ++i){
		int v; cin >> v;
		a.push_back(v);
	}
	sort(a.begin(), a.end());
	int ans = 0, mCopy = m;
	for (int i = 0; i < a.size(); ++i) {
		if (a[i] < 0 && mCopy > 0){
			ans += abs(a[i]);
			--mCopy;
		}
	}
	cout << ans << endl;
	return 0;
}