#include <iostream>
using namespace std;

int main() {
	int n = 0; cin >> n;
	int acount = 0, bcount = 0;
	for (int i = 0; i < n; i++) {
		int a1, b1;
		cin >> a1 >> b1;
		if (a1 > b1)
			acount++;
		else if (a1 < b1)
			bcount++;
		else
			;
	}
	if (acount > bcount)
		cout << "Mishka" << endl;
	else if (acount < bcount)
		cout << "Chris" << endl;
	else if (acount == bcount)
		cout << "Friendship is magic!^^" << endl;
	return 0;
}