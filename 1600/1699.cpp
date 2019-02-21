#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int dp[100001];
int main()
{
	int n;
	cin >> n;
	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= n; ++i) {
		int ze = 1;
		int min_ze = 1 + dp[i - 1];
		while (ze*ze<=i) {
			min_ze = min(1 + dp[i - ze*ze], min_ze);
			++ze;
		}
		dp[i] = min_ze;
	}
	cout << dp[n] << endl;
}
