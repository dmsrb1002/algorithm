#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
ll dp[102][102][102];
int n, L, R;
#define MOD 1000000007

int main()
{
	cin >> n >> L >> R;
	for (int i = 1; i <= n; ++i)dp[i][i][1] = 1;
	for (int i = 1; i <= n; ++i)dp[i][1][i] = 1;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= L; ++j) {
			for (int k = 1; k <= R; ++k) {
				if ((i == j && k == 1) || (i == k && j == 1))continue;
				
				dp[i][j][k] = (dp[i - 1][j][k] * (i - 2)) +  (dp[i-1][j - 1][k]) + (dp[i-1][j][k - 1]);
				dp[i][j][k] %= MOD;
				
			}
		}
	}
	
	cout << dp[n][L][R]  << endl;
}
