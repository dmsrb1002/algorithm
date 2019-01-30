#include<iostream>
using namespace std;

int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };
int arr[51][51];
bool check[51][51];
int m, n, k, cnt = 0;
void dfs(int y, int x, int cnt)
{
	
	check[y][x] = true;
	for (int i = 0; i < 4; ++i) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 0 && ny >= 0 && nx < m && ny < n) {
			if (arr[ny][nx] == 1 && !check[ny][nx]) {
				dfs(ny, nx , cnt);
				
			}
		}
	}
}

int main()
{
	int testcase;
	cin >> testcase;
	for (int t = 0; t < testcase; ++t) {
		cnt = 0;
		cin >> m >> n >> k;

		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				arr[i][j] = 0;
				check[i][j] = false;
			}
		}
		int x, y;
		for (int i = 0; i < k; ++i) {
			cin >> x >> y;
			arr[y][x] = 1;

		}

		for (int y = 0; y < n; ++y) {
			for (int x = 0; x < m; ++x) {
				if (arr[y][x] == 1 && !check[y][x]) {

					dfs(y, x, ++cnt);

				}
			}
		}
		cout << cnt << endl;
	}
}
