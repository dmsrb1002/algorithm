#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
using namespace std;

int arr[1000][1000];
bool visited[1000][1000];
int dx[] = { 1,0,-1,0 };
int dy[] = { 0,1,0,-1 };
int val; int n;
void rec(int x, int y)
{
	if (val == 1)return;

	for (int i = 0; i < 4; ++i) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (!visited[nx][ny] && nx >= 0 && ny >= 0 && nx < n&&ny < n) {
			visited[nx][ny] = true;
			arr[nx][ny] = --val;
			while (1)
			{
				nx = nx + dx[i];
				ny = ny + dy[i];
				if (!visited[nx][ny] && nx >= 0 && ny >= 0 && nx < n&&ny < n) {
					visited[nx][ny] = true;
					arr[nx][ny] = --val;
				}
				else {
					x = nx - dx[i], y = ny - dy[i];
					break;
				}

			}
			rec(x, y);
		}
	}
	
}

int main()
{
	
	cin >> n;
	val = n*n;
	visited[0][0] = true;
	arr[0][0] = val;
	rec(0, 0);
	
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	int ans;
	cin >> ans;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (arr[i][j] == ans) {
				cout << i + 1 << " " << j + 1 << endl;
			}
		}
		
	}
	return 0;
}
