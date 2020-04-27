#include <iostream>
using namespace std;

int main() {
	long long int k = 0, n = 0, w = 0, sum = 0;
	cin >> k >> n >> w;
	for (unsigned int i = 1; i <= w; i++) {
		sum += (k*i);
	}
	if (n>=sum)
		cout << 0 << endl;
	else
		cout << sum-n << endl;
	return 0;
}