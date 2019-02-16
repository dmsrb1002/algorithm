#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;

int main() 
{
	ll x, k; cin >> x >> k;
	unsigned long long shift = 1;
	ll idx = 0;
	vector<ll> v1,v2;
	while (idx<=63)
	{
		if ((x & (shift << idx)) >> idx == 0) {
			v1.push_back(shift << idx);
		}
		++idx;
	}
	ll ans = 0;
	while (k!=0)
	{
		v2.push_back(k % 2);
		k = k / 2;
	}
	
	for (int i = 0; i < min(v1.size(), v2.size()); ++i)
	{
		ans += v1[i] * v2[i];
	}
	cout << ans << endl;
	
	
}
