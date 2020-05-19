#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, k;
	vector<int> a;
	
	cin >> n >> k;
	for (int i = 0; i < n; ++i) {
		int v; cin >> v;
		a.push_back(v);
	}
	sort(a.begin(), a.end());
	int count=0;
	for (int i = 0; i < a.size(); ++i) {
		if (a[i]+k <= 5)
			++count;
		else
			break;
	}
	if (count == 0)
		cout << 0 << endl;
	else
		cout << count/3 << endl;
}