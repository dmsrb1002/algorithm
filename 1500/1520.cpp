#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
using namespace std;


int arr[501][501];
int dp[501][501];
int visited[501][501];
int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };
int n, m;
int dfs(int y, int x)
{
	//m = y,n=x
	if (y == m - 1 && x == n - 1) {
		return 1;
	}
	if (visited[y][x]) {
		return dp[y][x];
	}
	visited[y][x] = 1;
	for (int i = 0; i < 4; ++i) {
		int n_x = x + dx[i];
		int n_y = y + dy[i];
		if (n_x<0||n_y<0||n_x >= n || n_y >= m)continue;
		if (arr[y][x] <= arr[n_y][n_x])continue;
		dp[y][x] += dfs(n_y, n_x);	//최종 dp[y][x]값은 이전 dp[y][x]값의 누적 + 새로운 dfs에 의한 값
//		dp[n_y][n_x] = dp[y][x] + dfs(n_y, n_x);
	}
	return dp[y][x];
}
int main()
{
	
	cin >> m >> n;
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			scanf("%d", &arr[i][j]);
		}
	}
	cout << dfs(0, 0) << endl;
	

	return 0;
}
