#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	string s; cin >> s;
	int* nums = new int[s.size()]; int index = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != '+')
			nums[index++] = s[i]-'0';
	}
	sort(nums, nums+index);
	for (int i = 0; i < index; i++) {
		if (i > 0)
			cout << "+" << nums[i];
		else
			cout << nums[i];
	} 
	return 0;
}