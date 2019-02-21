#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main() {
	long long int a;
	cin >> a;
	int arr[10] = { 0, };
	int count = 0;
	while (1) {
		if (a == 0) {
			break;
		}
		arr[count] = a % 10;
		a = a / 10;
		++count;
	}
	sort(arr, arr + 10, greater<int>());
	long long int tot = 0;
	for (int i = 0; i < count; ++i) {
		for (int j = i; j < count - 1; ++j) {
			arr[i] = arr[i] * 10;
		}
		tot += arr[i];
	}
	cout << tot << endl;
	return 0;
}
