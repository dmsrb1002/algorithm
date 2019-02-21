#include<iostream>
#include<algorithm>
using namespace std;


int arr[2187][2187];
int ans[3];
void rec(int x, int y, int n)
{
	if (n == 0)return;
	bool flag = false;
	int first = arr[x][y];
	for (int i = x; i < x + n; ++i) {
		for (int j = y; j < y + n; ++j) {
			if (first != arr[i][j])flag = true;
		}
	}
	if (flag)
	{
		rec(x, y, n / 3);
		rec(x, y + n / 3, n / 3);
		rec(x, y + n * 2 / 3, n / 3);

		rec(x + n / 3, y, n / 3);
		rec(x + n / 3, y + n / 3, n / 3);
		rec(x + n / 3, y + 2 * n / 3, n / 3);

		rec(x + n * 2 / 3, y, n / 3);
		rec(x + n * 2 / 3, y + n / 3, n / 3);
		rec(x + n * 2 / 3, y + n * 2 / 3, n / 3);

	}
	else {
		++ans[first + 1];
	}
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			scanf("%d", &arr[i][j]);
		}
	}
	rec(0, 0, n);
	cout << ans[0] << endl;
	cout << ans[1] << endl;
	cout << ans[2] << endl;

}
