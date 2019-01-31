#include<iostream>
#include<string>
using namespace std;
bool isPell(string s)
{
	for (int i = 0; i < s.size() / 2; ++i)
	{
		if (s[i] != s[s.size() - 1 - i])return false;
	}
	return true;
}
int main()
{
	string s; cin >> s;
	for (int i = 0; i < s.size(); ++i)
	{
		string tmp = s;
		for (int j = i; j >= 1;--j)
		{
			tmp += s[j-1];
			
		}
		if (isPell(tmp))
		{
			cout << tmp.size() << endl;
			return 0;
		}

	}
}
