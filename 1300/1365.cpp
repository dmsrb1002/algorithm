#include<iostream>
#include<algorithm>
using namespace std;

int arr[1000001];
int dp[1000001];
int bs(int start, int end, int target)
{
	while (start < end) {
		int mid = (start + end) / 2;
		if (dp[mid] > target)end = mid;
		else if (dp[mid] < target)start = mid + 1;
		else return -1;
	}
	return end;
}
int main()
{
	int n; cin >> n;
	for (int i = 1; i <= n; ++i)scanf("%d", &arr[i]);
	dp[1] = arr[1];	
	int size = 1;	
	for (int i = 2; i <= n; ++i) {
		if (arr[i] > dp[size]) {	
			++size;	//+1
			dp[size] = arr[i];		
			
		}
		else {
			int idx = bs(1, size, arr[i]);	
			if (idx != -1)dp[idx] = arr[i];
		}
	}
	cout << n-size << endl;
	return 0;
}
