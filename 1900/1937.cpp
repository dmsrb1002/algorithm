#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
using namespace std;


int arr[501][501];
int dp[501][501];
//int visited[501][501];
int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };
int n;
int dfs(int y, int x)
{
	
	if (dp[y][x]) {
		return dp[y][x];
	}
//	visited[y][x] = 1;
	dp[y][x] = 1;
	for (int i = 0; i < 4; ++i) {
		int n_x = x + dx[i];
		int n_y = y + dy[i];
		if (n_x<0||n_y<0||n_x >= n || n_y >= n)continue;
		if (arr[y][x] >= arr[n_y][n_x])continue;
		dp[y][x] = max(dp[y][x], dfs(n_y, n_x) + 1);	

	}
	return dp[y][x];
}
int main()
{
	
	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			scanf("%d", &arr[i][j]);
		}
	}
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			ans = max(ans, dfs(i, j));
		}
	}
	cout << ans << endl;

	return 0;
}
