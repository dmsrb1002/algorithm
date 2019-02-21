#include<iostream>
#include<algorithm>
using namespace std;

#pragma warning(disable:4996)


int dp[501][501];
int arr[501][501];
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= i; ++j) {
			scanf("%d", &arr[i][j]);
		}
	}
	dp[1][1] = arr[1][1];
	dp[2][1] = arr[2][1] + arr[1][1];
	dp[2][2] = arr[2][2] + arr[1][1];

	for (int i = 3; i <= n; ++i) {
		dp[i][1] = arr[i][1] + dp[i - 1][1];
		dp[i][i] = arr[i][i] + dp[i - 1][i - 1]; 
		for (int j = 2; j <= i-1; ++j) {
			dp[i][j] = max(arr[i][j] + dp[i - 1][j - 1], arr[i][j] + dp[i - 1][j]);
		}
	}
	int max = dp[n][1];
	for (int i = 2; i <= n; ++i) {
		if (max < dp[n][i]) {
			max = dp[n][i];
		}
	}
	cout << max << endl;
	return 0;

}
