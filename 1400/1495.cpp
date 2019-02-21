#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int N, S, M;
int A[101];
bool dp[101][1001];

int main()
{
	ios::sync_with_stdio(false);
	cin >> N >> S >> M;
	for (int i = 1; i <= N; ++i)cin >> A[i];
	dp[0][S] = true;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j <= M; ++j)
		{
			if (dp[i][j])
			{
				if (j - A[i + 1] >= 0)dp[i + 1][j - A[i + 1]] = true;
				if (j + A[i + 1] <= M)dp[i + 1][j + A[i + 1]] = true;
			}
		}
	}
	int ans = -1;
	for (int i = 0; i <= M; ++i)
	{
		if (dp[N][i])ans = i;
	}
	cout << ans << endl;
}
