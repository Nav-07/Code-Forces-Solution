#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int a[100];
	int n = 0, total = 0; 
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		total += a[i];
	}
	sort(a, a+n, greater<int>());
	int sum1, sum2;
	sum1 = 0; int i = 0;
	int ans = 0;
	while (sum1 <= total) {
		sum1 += a[i];
		total -= a[i];
		++i; 
		++ans;
	}
	cout << ans << endl;
	return 0;
}