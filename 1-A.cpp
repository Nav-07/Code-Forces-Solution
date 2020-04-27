#include <iostream>
using namespace std;

int main() {
	long long int n, m, a;
	cin >> n >> m >> a;

	long long int l = n /a;
	long long int w = m / a;
	if (n % a != 0) l++;
	if (m % a != 0) w++;

	cout << l*w << endl;
	return 0;
}