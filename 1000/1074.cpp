#include<iostream>
#include<math.h>
using namespace std;
int ans = 0;
void rec(int n, int r, int c)
{
	if (n == 1) {
	
		ans += r * 2 + c;
		return;
	}
	int flag = pow(2, n - 1);
	//1사분면
	if (r < flag && c < flag) {
		rec(n - 1, r, c);
	}
	//2사분면
	else if (r < flag && c >= flag) {
		ans += flag * flag;
		rec(n - 1, r, c - flag);
	}
	//3사분면
	else if (r >= flag && c < flag) {
		ans += flag*flag * 2;
		rec(n - 1, r - flag, c);
	}
	//4사분면
	else {
		ans += flag * flag * 3;
		rec(n - 1, r - flag, c - flag);
	}
	
}
int main()
{
	int n, r, c;
	cin >> n >> r >> c;
	rec(n, r, c);
	cout << ans << endl;
}
