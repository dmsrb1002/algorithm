#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
typedef long long ll;

int main()
{
	string s; cin >> s;
	bool flag = false;
	for (int i = 1; i < s.size(); ++i)
	{
		string s1 = s.substr(0, i);
		string s2 = s.substr(i, s.size());
		ll a = 1, b = 1;
		for (int i = 0; i < s1.size(); ++i)
		{
			a *= (s1[i] - '0');
		}
		for (int i = 0; i < s2.size(); ++i)
		{
			b *= (s2[i] - '0');
		}
		if (a == b) {
			flag = true;
			break;
		}
	}
	if (flag)cout << "YES" << endl;
	else cout << "NO" << endl;
}
