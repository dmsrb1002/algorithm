#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
ll n, k;
ll getCount(ll x)
{
	ll cnt = 0;
	for (int i = 1; i <= n; ++i) {
		cnt += min(x / i, n);
	}
	return cnt;
}
int main() {
	cin >> n >> k;
	ll start = 1;
	ll end = 1;
	for (int i = 0; i < 10; ++i)end *= 10;
	while (start <= end)
	{
		ll mid = (start + end) / 2;
		if (getCount(mid) >= k)end = mid - 1;
		else start = mid + 1;
	}
	cout << start << endl;
}


