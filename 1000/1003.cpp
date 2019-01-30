#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
using namespace std;


int dp[41][2];
int main()
{
	int t, n;
	cin >> t;
	for (int testcase = 0; testcase < t; ++testcase) {
		scanf("%d", &n);
		dp[0][0] = 1; dp[1][1] = 1;
		for (int i = 2; i <= n; ++i) {
			dp[i][0] = dp[i - 1][0] + dp[i - 2][0];
			dp[i][1] = dp[i - 1][1] + dp[i - 2][1];
		}
		printf("%d %d\n", dp[n][0], dp[n][1]);
	}
	return 0;
}
