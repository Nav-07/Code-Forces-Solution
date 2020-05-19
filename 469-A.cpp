#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, p, q;
	string ans; 
	
	cin >> n >> p;
	vector<int> levelX;
	for (int i = 0; i < p; ++i) {
		int var;
		cin >> var;
		levelX.push_back(var);
	}
	cin >> q;
	vector<int> levelY;
	for (int i = 0; i < q; ++i) {
		int var;
		cin >> var;
		levelY.push_back(var);
	}
	int current; bool init = false;
	levelX.insert(levelX.end(), levelY.begin(), levelY.end());
	sort(levelX.begin(), levelX.end());
	for (int i = 0; i < levelX.size(); ++i) {
		if (!init) {
			current = levelX[0];
			if (current != 1) {
				ans = "Oh, my keyboard!";
				break;
			}
			else
				++current;
		} else {
			if (levelX[i] == current)
				++current;
			else if (levelX[i] > current) {
				ans = "Oh, my keyboard!";
				break;
			} else if (levelX[i] < current) {
				continue;
			}
		}
		init = true;
	}
	if (current-1 == n)
		ans = "I become the guy.";
	else 
		ans = "Oh, my keyboard!";
	cout << ans << endl;
}