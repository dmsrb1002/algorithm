#include<iostream>
using namespace std;
#define mod 1000000000
int main()
{
	int n;
	cin >> n;
	int flag;
	if (n == 0) {
		cout << 0 << endl;
		cout << 0 << endl;
		return 0;
	}
	else if (n == 1 || n == -1) {
		cout << 1 << endl;
		cout << 1 << endl;
		return 0;
	}
	else if (n > 0)flag = 1;
	else {
		if (n % 2 == 0)flag = -1;
		else {
			flag = 1;
		}
	}
	long long a = 0, b = 1,c;
	for (int i = 2; i <= abs(n); ++i) {
		c = (a + b) % mod;
		a = b;
		b = c;

	}
	cout << flag << endl;
	cout << c << endl;
}
