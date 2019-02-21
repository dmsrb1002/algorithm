#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	string s; cin >> s;
	int ans = 0, mul = 1;
	for (int i = s.size() - 1; i >= 0; --i)
	{
		if (s[i] - '0' >= 10)
		{
			ans += (s[i] - 'A' + 10)*mul;
		}
		else ans += (s[i] - '0') * mul;
		mul *= 16;
	}
	cout << ans << endl;
}
