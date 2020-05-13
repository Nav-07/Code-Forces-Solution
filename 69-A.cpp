#include <iostream>
using namespace std;

int main() {
	int n=0, x=0, y=0, z=0;
	cin >> n;
	while (n--) {
		int a,b,c;cin>>a>>b>>c;
		x+=a;y+=b;z+=c;
	}
	if (x==0&&y==0&&z==0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}