#include <iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
int n;
int dp[101][10][1 << 10];
#define MOD 1000000000
int main() {
	cin >> n;
	memset(dp, 0, sizeof(dp));
	int visited = 1 << 10;
	long long sum = 0;
	int bit = 0;
	for (int i = 1; i < 10; ++i)dp[1][i][1 << i] = 1;
	for (int i = 2; i <= n; ++i) {
		for (int j = 0; j <= 9; ++j) {
			for (int k = 0; k < visited; ++k) {
				bit = k | (1 << j);
				dp[i][j][bit] =(dp[i][j][bit] + ((j > 0 ? dp[i - 1][j - 1][k] : 0) + (j < 9 ? dp[i - 1][j + 1][k] : 0)) % MOD )% MOD;
			}
		}
	}

	for (int i = 0; i <= 9; ++i) {
		sum = (sum + dp[n][i][visited - 1]) % MOD;
	}
	cout << sum << endl;

}


