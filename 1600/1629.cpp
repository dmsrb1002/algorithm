#include<iostream>
#include<math.h>
using namespace std;

long long rec(int a,int b,int c)
{
	if (b == 0)return 1;
	if (b % 2 == 1) {
		return (rec(a, b - 1, c)*a)%c;
	}
	else {
		long long tmp = rec(a,b/2,c);
		return (tmp*tmp) % c;
	}
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << rec(a, b, c) << endl;

}
