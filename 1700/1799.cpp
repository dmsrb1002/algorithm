#include<iostream>
#include<algorithm>
using namespace std;
int n;
int A[11][11];
int B[11][11];
bool visited[11][11];
int ans = 0;
int cnt = 0;
bool spread(int x, int y)
{
	for (int i = 1; x - i >= 0 && y - i >= 0; i++) {
		if (B[x - i][y - i] == 2)
			return false;
	}
	for (int i = 1; x - i >= 0 && y + i<n; i++) {
		if (B[x - i][y + i] == 2)
			return false;
	}
	for (int i = 1; x + i<n&&y + i<n; i++) {
		if (B[x + i][y + i] == 2)
			return false;
	}
	for (int i = 1; x + i<n&&y - i >= 0; i++) {
		if (B[x + i][y - i] == 2)
			return false;
	}
	return true;
}
void backtracking(int x, int y)
{
	B[x][y] = 1;
	if (A[x][y] == 1 && spread(x, y)) {
		++cnt;
		B[x][y] = 2;
	}
	if (x - 1 >= 0 && B[x - 1][y] == 0) {
		backtracking(x - 1, y);
	}
	if (y - 1 >= 0 && B[x][y - 1] == 0) {
		backtracking(x, y - 1);
	}
	if (x + 1<n&&B[x + 1][y] == 0) { 
		backtracking(x + 1, y);
	}
	if (y + 1<n&&B[x][y + 1] == 0) {
		backtracking(x, y + 1);
	}

}
void reset()
{
	cnt = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			B[i][j] = 0;
		}
	}
}
int main()
{
	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> A[i][j];
		}
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (A[i][j] == 1) {
				backtracking(i, j);
				ans = max(ans, cnt);
				reset();
			}
		}
	}

	cout << ans << endl;
}
