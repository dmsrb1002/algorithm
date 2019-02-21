#include<iostream>
#include<algorithm>
using namespace std;

int n;
char arr[64][64];

void rec(int x, int y,int n)
{
	bool flag = false;
	
	char first = arr[x][y];
	for (int i = x; i < x + n; ++i) {
		for (int j = y; j < y + n; ++j) {
			if (arr[i][j] != first)flag = true;
		}
	}
	if (flag) {
		cout << "(";
		rec(x, y, n / 2);
		rec(x, y + n / 2, n / 2);
		rec(x + n / 2, y, n / 2);
		rec(x + n / 2, y + n / 2, n / 2);
		cout << ")";
	}
	else {
		cout << first;
	}
	return;
}
int main()
{
	
	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> arr[i][j];
		}
	}
	rec(0, 0, n);
}
