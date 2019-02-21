#include<iostream>
#include<algorithm>
using namespace std;



int main()
{
	int n; cin >> n;
	bool arr[101];
	for (int i = 0; i <= 100; ++i)arr[i] = true;
	int ans = 0;
	for (int i = 1; i <= n; ++i) {
		int tmp; scanf("%d", &tmp);
		if (arr[tmp]) { arr[tmp] = false; }
		else { ++ans; }
	}
	cout << ans << endl;
}
