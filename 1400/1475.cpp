#include<iostream>
#include<algorithm>
using namespace std;


int main() {
	int n;
	cin >> n;
	int arr[9] = {0,};
	while (1) {
		if (n % 10 == 9) {
			++arr[6];
		}
		else {
			++arr[n % 10];
		}
		n = n / 10;
		if (n == 0) { break; }
	}
	if (arr[6] % 2 == 0) {
		arr[6] = arr[6] / 2;
	}
	else {
		arr[6] = arr[6] / 2 + 1;
	}
	sort(arr, arr + 9);
	cout << arr[8] << endl;
	return 0;
}
