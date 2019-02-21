#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
typedef long long ll;
int main()
{
	ios::sync_with_stdio(false);
	ll n; cin >> n;
	ll ans = 0, idx = 1, cnt = 0;
	while (1)
	{
		
		cnt = (n + 1)*idx++;
		if (cnt%n == 0)break;
		else ans += cnt;

	}
	cout << ans << endl;
}


