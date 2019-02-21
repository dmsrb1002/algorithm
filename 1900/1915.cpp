#include <iostream>
#include<algorithm>
using namespace std;

int dp[1002][1002];
int n, m;
int main() {
	
	cin >> n >> m;
	ios::sync_with_stdio(false);
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			char tmp; cin >> tmp;
			dp[i][j] = tmp - '0';
		}
	}
	int c = 0;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			if (dp[i][j]) {
				dp[i][j] = min(min(dp[i][j - 1], dp[i - 1][j]), dp[i - 1][j - 1]) + 1;
				c = max(c, dp[i][j]);
			}
		}
	}
	cout << c*c << endl;
}
