#include<iostream>
#include<algorithm>
using namespace std;
typedef unsigned long long ull;
int main()
{
	int n, m; cin >> n >> m;
	ull row=0, col=0;
	ull shift = 1;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			char tmp; cin >> tmp;
			if (tmp == 'X') {
				row |= (shift << i);
				col |= (shift << j);
			}
		}
	}
	int cnt1 = 0, cnt2 = 0;
	for (int i = 0; i < n; ++i) {
		if (!(row & (shift << i)))++cnt1;
	}
	for (int i = 0; i < m; ++i) {
		if (!(col & (shift << i)))++cnt2;
	}
	cout << max(cnt1, cnt2) << endl;
}
