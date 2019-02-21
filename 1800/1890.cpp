#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
using namespace std;


int arr[101][101];
long dp[101][101];
int visited[101][101];
int dx[] = { 0,1 };
int dy[] = { 1,0 };
int n;
long dfs(int y, int x)
{
	
	if (y == n - 1 && x == n - 1) {
		return 1;
	}
	if (arr[y][x] == 0)return 0;
	if (visited[y][x] || dp[y][x]) {
		return dp[y][x];
	}
	visited[y][x] = 1;
	for (int i = 0; i < 2; ++i) {
		int n_x = x + dx[i] * arr[y][x];
		int n_y = y + dy[i] * arr[y][x];
		if (n_x >= n || n_y >= n)continue;
		dp[y][x] += dfs(n_y, n_x);	//최종 dp[y][x]값은 이전 dp[y][x]값의 누적 + 새로운 dfs에 의한 값
//		dp[n_y][n_x] = dp[y][x] + dfs(n_y, n_x);
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
	cout << dfs(0, 0) << endl;
	

	return 0;
}
