#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    string s; cin >> s;
    string ans = "";
    transform(s.begin(), s.end(), s.begin(),
    [](unsigned char c){ return std::tolower(c); });
    vector<char> vowels{'a','o','y','e','u','i'};
    for (int i = 0; i < s.size(); i++) {
        bool isvowel = false;
        for (unsigned int j = 0; j < vowels.size(); j++) {
            if (s[i] == vowels[j]) {
                isvowel = true;
                break;
            }
        }
        if (!isvowel) {
            ans += '.';
            ans += s[i];
        }
    }
    cout << ans << endl;
    return 0;
}