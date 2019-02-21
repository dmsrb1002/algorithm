#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
using namespace std;

int arr[1001];
int dp[1001];
int main()
{
	int n;
	int length = 1;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		scanf("%d", &arr[i]);
	}
	//dp[i] = i를 채울 수 있는 경우의 수
	dp[0] = 1;
	for (int i = 1; i < n; ++i) {
		dp[i] = 1;
		for (int j = 0; j < i; ++j) {
			if (arr[i] > arr[j] && dp[i] < dp[j] + 1) {
				dp[i] = dp[j] + 1;
			}
		}
		length = max(length, dp[i]);
	}
	cout << length << endl;
	return 0;
}
