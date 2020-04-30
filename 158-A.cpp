#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
		int n, k; cin >> n >> k;
		vector<int> nums;
		for (int i = 0; i < n; i++) {
				int d = 0; cin >> d;
				nums.push_back(d);
		}
		int a = nums[k-1]; int ans = 0;
		for (int i = 0; i < n; i++) {
				if (a == 0) {
						if (nums[i] > 0)
							ans++;
				} else {
						if (nums[i] >= a)
							ans++;
				}
		}
		cout << ans << endl;
		return 0;
}
