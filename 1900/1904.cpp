#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a, b, c;
	a = 2; b = 3;
	int cnt = 2;;
	while (cnt != n - 1) {
		c = (a + b) % 15746;
		a = b;
		b = c;
		++cnt;
	}
	cout << c << endl;
}
