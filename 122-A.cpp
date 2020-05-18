#include <iostream>
#include <string>
using namespace std;

typedef long long int lli;
int main() {
	lli n = 0;
	cin >> n;
	
	// find the numbers that contain 4 or 7
	int lucky[] = {
		4, 7, 477, 447, 444, 744, 774, 777, 47, 74
	};
	for (int i = 0 ; i < 10; i++) {
		if (n % lucky[i] == 0) {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}