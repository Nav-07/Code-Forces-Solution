#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, i, ans(0), prev; cin >> n;
	int* a = new int[n];
	for (i = 0; i < n; ++i)
		cin >> a[i];
	int highest(0), lowest(0);
	highest = lowest = a[0];
	for (i = 1; i < n; ++i) {
		if (a[i] > highest) {
			++ans;
			highest = a[i];
		} else if (a[i] < lowest) {
			++ans;
			lowest = a[i];
		}
	}
	cout << ans << endl;
}