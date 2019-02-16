#include<iostream>
#include<cmath>
#include<map>
typedef long long ll;
using namespace std;
ll n, p, q;
map<ll, ll> m;
ll dp(ll num)
{
	if (m[num])return m[num];
	return m[num] = dp(floor(num / p)) + dp(floor(num / q));
}
int main() {
	cin >> n >> p >> q;
	m[0] = 1;
	cout << dp(n) << endl;
}

