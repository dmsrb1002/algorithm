#include<iostream>
#include<string>
using namespace std;

int main()
{
	string ans;
	string init;
	cin >> init;
	ans = "z";
	for (int idx1 = 1; idx1 < init.size() - 1; ++idx1)
	{
		for (int idx2 = idx1 + 1; idx2 <= init.size() - 1; ++idx2)
		{
			string s;
			for (int i = idx1 - 1; i >= 0; --i)s += init[i];
			for (int i = idx2 - 1; i >= idx1; --i)s += init[i];
			for (int i = init.size() - 1; i >= idx2; --i)s += init[i];
			
			if (ans > s)ans = s;
		}
	}
	if (ans == "z")
	{
		cout << init << endl;
	}
	else
	{
		cout << ans << endl;
	}
	
}
