#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	string s1, s2; cin >> s1 >> s2;
	string tmp = "";
	if (s1.size() > s2.size()) {
		for (int i = 0; i < s1.size() - s2.size(); ++i)
		{
			tmp += '0';
		}
		tmp += s2;
		s2 = tmp;
	}
	else {
		for (int i = 0; i < s2.size() - s1.size(); ++i)
		{
			tmp += '0';
		}
		tmp += s1;
		s1 = tmp;
	}
	
	int carry = 0;
	string ans = "";
	for (int i = s1.size() - 1; i >= 0; --i) {
		if (s1[i] - '0' + s2[i] - '0' + carry == 3) {
			ans += '1';
			carry = 1;
		}
		else if (s1[i] - '0' + s2[i] - '0' + carry == 2) {
			ans += '0';
			carry = 1;
		}
		else if (s1[i] - '0' + s2[i] - '0' + carry == 1) {
			ans += '1';
			carry = 0;
		}
		else {
			ans += '0';
			carry = 0;
		}
	}
	if (carry)ans =  ans + '1';
	
	while(ans.size() != 0 && ans[ans.size()-1] == '0') {
		if (ans.size() == 1)break;
		ans.erase(ans.end() - 1);
	}
	for (int i = ans.size() - 1; i >= 0; --i) {
		printf("%c", ans[i]);
	}

}


