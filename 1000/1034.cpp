#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
string A[51];
int ans = 0;
int main() 
{
	int n, m; cin >> n >> m;
	for (int i = 0; i < n; ++i)cin >> A[i];
	int k; cin >> k;
	for (int i = 0; i < n; ++i)
	{
		int cnt = 0;
		for (int j = 0; j < m; ++j)
		{
			if (A[i][j] == '0')++cnt;
		}
		if (cnt <= k && cnt % 2 == k % 2)
		{
			int cnt2 = 0;
			for (int j = i; j < n; ++j)
			{
				if (A[i] == A[j])++cnt2;
			}
			ans = max(ans, cnt2);
		}
	}
	cout << ans << endl;
}
