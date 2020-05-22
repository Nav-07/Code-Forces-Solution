#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	char* mat = new char[n*m];
	for (int i = 0; i < n*m; ++i)
		cin >> mat[i];
	string ans = "#Black&White";
	for (int i = 0; i < n*m; ++i) {
		if (mat[i] != 'B' && mat[i] != 'W' && mat[i] != 'G') {
			ans = "#Color";
			break;
		}
	}
	cout << ans << endl;
}