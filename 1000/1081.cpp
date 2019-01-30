#include<iostream>
using namespace std;
typedef long long ll;

ll sum(ll x)
{
	ll y = 0, r[10] = {0,}, m=0;
	for (m = 1; x; m *= 10) {
		int t = x % 10;
		x /= 10;
		for (int j = 0; j < t; j++) r[j] += (x + 1)*m;
		r[t] += x*m + y + 1;
		for (int j = t + 1; j < 10; j++) r[j] += x*m;
		y += t*m;
	}
	r[0] -= (m - 1) / 9;
	ll s =0;
	for (int i = 0; i < 10; i++) {
		s += r[i] * i;
	}
	return s;
}
int main() {
	ll x1, x2;
	scanf("%lld %lld", &x1,&x2);
	cout << sum(x2) - sum(x1-1) << endl;
	return 0;
}
