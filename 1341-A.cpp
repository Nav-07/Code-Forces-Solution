#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t; cin >> t;
	for (int g = 0; g < t; g++) {
		int n, a, b, c, d;
		cin >> n >> a >> b >> c >> d;
		int grainLowerBound = a - b;
		int grainUpperBound = a + b;
		
		int packLowerBound = c - d;
		int packUpperBound = c + d;
		
		bool found = false;
		for (int i = grainUpperBound; i > grainLowerBound-1; i--) {
			for (int j = packLowerBound; j < packUpperBound+1; j++) {
				if (i*n == j) {
					found = true;
					cout << "YES" << endl;
					i = grainLowerBound;
					j = packUpperBound;
				}
			}
		}
		if (!found)
			cout << "NO" << endl;
	}
	return 0;
}