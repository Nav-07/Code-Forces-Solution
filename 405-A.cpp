#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	
	cin >> n;
	vector<int> c;
	for (int i = 0; i < n; ++i) {
		int var;
		cin >> var;
		c.push_back(var);
	}
	sort(c.begin(), c.end());
	for (int i = 0; i < c.size(); ++i)
		cout << c[i] << " ";
	return 0;
}