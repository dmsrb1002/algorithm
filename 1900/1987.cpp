#include<iostream>
#include<algorithm>
using namespace std;
char arr[21][21];

bool check[26];
int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };
int r, c,ans=0;
int result=0;
void dfs(int x,int y,int ans)
{
	if (!check[arr[x][y] - 'A']) {
		check[arr[x][y] - 'A'] = true;
		++ans; 
		for (int i = 0; i < 4; ++i) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 1 && ny >= 1 && nx <= r && ny <= c && !check[arr[nx][ny] - 'A']) {
				dfs(nx, ny,ans);
				
			}
			
		}
		if (ans > result) {
			result = ans;


		}
		ans = 0;
		check[arr[x][y] - 'A'] = false;
	}
	
}
int main()
{
	
	cin >> r >> c;
	for (int i = 1; i <= r; ++i) {
		for (int j = 1; j <= c; ++j) {
			cin >> arr[i][j];
		}
	}
	
	dfs(1, 1,0);
	
	
	cout << result << endl;
}
