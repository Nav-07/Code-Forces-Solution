#include <map>
#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;cin>>a>>b>>c>>d;
    map<int,int> m;
    m[1]=a;
    m[2]=b;
    m[3]=c;
    m[4]=d;
    string s="";cin>>s;
    int ans=0;
    for(int i=0;i<s.size();i++){
        ans+=m[s[i]-'0'];
    }
    cout<<ans<<endl;
    return 0;
}