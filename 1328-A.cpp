#include<iostream>
#include<vector>
using namespace std;
typedef long long int lli;
int main() {
	lli t;
	cin>>t;
	while(t--){
		lli a,b,ans(0);
		cin>>a>>b;
		if(a%b==0)
			cout<<0<<endl;
		else
			cout<<b-a%b<<endl;
	}
	return 0;
}