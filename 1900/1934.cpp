#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int gcd(int a, int b)
{
	if (a%b == 0) {
		return b;
	}
	else {
		int r = a%b;
		a = b;
		b = r;
		gcd(a, b);
	}
}
int main()
{	
	int testcase;
	cin >> testcase;
	for (int t = 0; t < testcase; ++t) {
		int a, b;
		cin >> a >> b;
		cout << a*b / gcd(a, b) << endl;
	}
}
