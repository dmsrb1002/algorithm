#include<algorithm>
#include<iostream>

using namespace std;
int main() {
	long long k, n;
	long long arr[10000];
	cin >> k >> n;
	long long  min_v = 1, max_v = 0;
	for (int i = 0; i < k; ++i) {
		cin >> arr[i];
		max_v += arr[i];
	}
	max_v /= n;
	
	while (max_v >= min_v) {
		
		long long mid_v = (max_v + min_v) / 2;
		long long cnt = 0;
		for (int i = 0; i < k; ++i) {
			cnt += arr[i] / mid_v;
		}
		if (cnt < n)max_v = mid_v - 1;
		else {
			min_v = mid_v + 1;
		}
	}
	cout << max_v << endl;
	
}
