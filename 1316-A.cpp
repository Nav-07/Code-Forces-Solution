#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	long long int t; cin >> t;
	for (int i = 0; i < t; i++) {
		long long int n, m; cin >> n >> m;
		long long int* scores=new long long int[n]; long long int sum = 0;
		for (long long int j = 0; j < n; j++) {
			cin >> scores[j];
			sum += scores[j];
		}
		cout << min(sum,m) << endl;
	}
	return 0;
}