#include<iostream>

using namespace std;
int c(int n, int r);
int d[31][31];
int main() {
	
	int testcase;
	cin >> testcase;
	for (int i = 0; i < testcase; ++i) {
		int n, r;
		cin >> r >> n;
		for (int i = 0; i < 31; ++i) {
			for (int j = 0; j < 31; ++j) {
				d[i][j] = -1;
			}
		}
		cout << c(n, r) << endl;	
	}
	
	return 0;
}
int c(int n, int r) {

	if (n == r || r == 0) { return 1; }
	if (d[n][r] >= 0) { return d[n][r]; }
	return d[n][r] = c(n - 1, r - 1) + c(n - 1, r);

}
