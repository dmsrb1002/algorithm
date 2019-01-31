#include <iostream>
#pragma warning (disable: 4996)
using namespace std;

int main() {
	int arr[2000] = { 0, };
	int index = 0;
	int i = 1;
	while (1) {
		if (index > 999) {
			break;
		}
		for (int j = 0; j < i; ++j) {
			arr[index] = i;
			++index;
		}
		++i;
	}
	int a, b;
	cin >> a >> b;
	int tot = 0;
	for (int i = a - 1; i <= b - 1; ++i) {
		tot += arr[i];
	}
	cout << tot << endl;
	
	return 0;
}
