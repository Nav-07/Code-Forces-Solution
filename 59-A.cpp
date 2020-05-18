#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main() {
	string s;
	int uc, lc;
	uc = lc = 0;
	
	cin >> s;
	for (int i = 0; i < s.size(); ++i) {
		if ((unsigned int)s[i] >= 65 && (unsigned int)s[i] <= 90)
			uc++;
		else if ((unsigned int)s[i] >= 97 && (unsigned int)s[i] <= 122)
			lc++;
	}
		string ans = "";
	if (uc > lc) {
		for (int i = 0; i < s.size(); i++) {
			ans+=toupper(s[i]);
		}
	} else if (uc <= lc) {
		for (int i = 0; i < s.size(); i++) {
			ans+=tolower(s[i]);
		}
	} 
	cout << ans << endl;
}