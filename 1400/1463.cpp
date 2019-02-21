#include <iostream>
#include<algorithm>
using namespace std;
int Min(int a,int b,int c);
int dp[1000001];
int main() {
	
	dp[0] = 0;
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;
	int n;
	cin >> n;
	int case1, case2, case3;
	for (int i = 4; i <= n; ++i) {
		case1 = dp[i - 1]+1;
		case2 = 1111111, case3 = 1111111;
		if (i % 2 == 0) {
			case2 = dp[i / 2]+1;
		}
		if (i % 3 == 0) {
			case3 = dp[i / 3]+1;
		}
		int m = Min(case1, case2, case3);
		
		dp[i] = m;
	}



	cout << dp[n] << endl;
	return 0;
}
int Min(int c1,int c2,int c3 ) {
	int m;
	if (c1 > c2) {
		m = c2;
	}
	else {
		m = c1;
	}
	if (m > c3) {
		m = c3;
	}
	

	return m;
}
