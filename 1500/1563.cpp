#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int dp[1001][2][3];
#define MOD 1000000
int main()
{
	ios::sync_with_stdio(false);
	int n; cin >> n;
	dp[0][0][0] = 1;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			for (int k = 0; k < 3; ++k)
			{
				//k=0 일때, 출석 or 지각
				//k=1,2일때 연속으로 k번 결석
				dp[i][j][0] += dp[i - 1][j][k];	//i일에 j번 지각한 상태에서 출석한 경우는(k=0) 
												//i-1일에 j번 지각한 상태에서 0~2번 연속결석한 경우의 수의 합
				dp[i][j][0] %= MOD;
				if (j == 0)						//i일에 지각했을때는 이전 지각 횟수가 0번 이여야함 따라서 j=0
				{
					dp[i][1][0] += dp[i - 1][0][k];	//i일에 1번 지각한 경우(k=0)
					dp[i][1][0] %= MOD;
				}
				if (k < 2)
				{
					dp[i][j][k + 1] += dp[i - 1][j][k];
					dp[i][j][k + 1] %= MOD;
				}
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			ans += dp[n][i][j];
			ans %= MOD;
		}
	}
	cout << ans << endl;
}


