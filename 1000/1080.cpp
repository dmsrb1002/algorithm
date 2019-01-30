#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int A[51][51];
int B[51][51];
int n, m;
bool flap(int x, int y)
{
	for (int i = x; i < x + 3; ++i) {
		for (int j = y; j < y + 3; ++j) {
			A[i][j] == 1 ? A[i][j] = 0 : A[i][j] = 1;
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (A[i][j] != B[i][j]) {
				return false;
			}
		}
	}
	return true;
}
int main() 
{
	cin >> n >> m;
	string s;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		for (int j = 0; j < m; ++j) {
			
			A[i][j] = s[j] - '0';
			
		}
		
	}

	for (int i = 0; i < n; ++i) {
		cin >> s;
		for (int j = 0; j < m; ++j) {
			
			B[i][j] = s[j] - '0';
			
		}
	
	}
	if (n < 3 || m < 3) {
		
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				if (A[i][j] != B[i][j]) {
					cout << -1 << endl;
					return 0;
				}
			}
		}
		cout << 0 << endl;
		return 0;
	}

	int ans = 0;
	for (int i = 0; i <= n - 3; ++i) {
		for (int j = 0; j <= m - 3; ++j) {
			if (A[i][j] != B[i][j])
			{
				bool flag = flap(i, j); ++ans;
				if (flag) { cout << ans << endl; return 0; }
			}
		}
	}
	cout << -1 << endl;
}
