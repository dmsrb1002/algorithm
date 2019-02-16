#include<algorithm>
#include<iostream>
#include<string>
using namespace std;


int main() {
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		s.append(" ");
		
		bool check[26] = { false };
		int idx = 0;
		while (idx !=s.size()-1) {
			
			if (check[s.at(idx) - 'a'] == true)break;
			if (s.at(idx) != s.at(idx + 1)) {

				check[s.at(idx) - 'a'] = true;
			}
			++idx;
		}
		if (idx == s.size()-1)++ans;
	}
	cout << ans << endl;
}
