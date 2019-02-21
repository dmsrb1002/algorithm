#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
using namespace std;

int arr[101][101];
bool visited[101][101];
int dx[] = { 0,1,0,-1 };
int dy[] = { 1,0,-1,0 };
int val; int m,n;
int cnt = 0;
void rec(int x, int y)
{
	if (val == 1)return;

	for (int i = 0; i < 4; ++i) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (!visited[nx][ny] && nx >= 0 && ny >= 0 && nx < m&&ny < n) {
			visited[nx][ny] = true;
			arr[nx][ny] = --val;
			while (1)
			{
				nx = nx + dx[i];
				ny = ny + dy[i];
				if (!visited[nx][ny] && nx >= 0 && ny >= 0 && nx < m&&ny < n) {
					visited[nx][ny] = true;
					arr[nx][ny] = --val;
				}
				else {
					x = nx - dx[i], y = ny - dy[i];
					break;
				}

			}
			++cnt;
			rec(x, y);
		}
	}
	
}

int main()
{
	
	cin >> m >> n;
	val = n*m;
	visited[0][0] = true;
	arr[0][0] = val;
	rec(0, 0);
	/*
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	*/	
	cout << cnt - 1 << endl;
	
	return 0;
}
