#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	
	vector<int> a;
	for (int i = 0; i < n; ++i) {
		int v; cin >> v;
		a.push_back(v);
	}
	int ans = 0;
	int prev = 0;
	vector<int> max;
	for (int i = 0; i < a.size(); ++i) {
		if (i == 0) {
			prev = a[i];
			++ans;
		} else if (i < a.size()-1) {
			if (prev < a[i]) {
				++ans;
			} else if (prev >= a[i]) {
				max.push_back(ans);
				ans = 0;
				++ans;
			}
		} else if (i >= a.size()-1) {
			if (prev < a[i])
				++ans;
		}
		prev = a[i];
				max.push_back(ans);
	}
	sort(max.begin(), max.end(), greater<int>());
	cout << max[0] << endl;
	return 0;
}