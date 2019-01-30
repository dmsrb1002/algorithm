#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	long long int n;
	cin >> n;
	long long int arr[6];
	long long int tot = 0;
	for (long long int i = 0; i < 6; ++i) {
		cin >> arr[i];
	}
	long long int max = arr[0];
	if (n == 1) {
		for (long long int i = 0; i < 6; ++i) {
			tot += arr[i];
			if (max < arr[i]) { max = arr[i]; }
		}
		tot = tot - max;
	}
	else {
		long long int min1 = arr[0];
		if (arr[0] > arr[5]) { min1 = arr[5]; }
		long long int min2 = arr[1];
		if (arr[1] > arr[4]) { min2 = arr[4]; }
		long long int min3 = arr[2];
		if (arr[2] > arr[3]) { min3 = arr[3]; }
		long long int minarr[3];
		minarr[0] = min1; minarr[1] = min2; minarr[2] = min3;
		sort(begin(minarr), end(minarr));
		tot += 4 * (minarr[0] + minarr[1] + minarr[2]);
		tot += 4*(n - 1)*(minarr[0] + minarr[1])+4*(n-2)*(minarr[0] + minarr[1]);
		tot += (5*(n-2)*(n-2)+4*(n-2))*minarr[0];


	}
	cout << tot << endl;
	return 0;
}
