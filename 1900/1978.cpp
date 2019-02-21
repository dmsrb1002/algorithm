#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int flag=0;
	int tot = 0;
	int* p = new int[n];
	for (int i = 0; i < n; ++i) {
		cin >> p[i];
	}
	for (int i = 2; i <= 1000; ++i) {
		for (int j = 2; j <= i; ++j) {
			if (i != j) {
				if (i%j == 0) {
					flag = 1;
					break;
				}
			}
		}
		if (flag == 0) {
			for (int k = 0; k < n; ++k) {
				if (p[k] == i) { ++tot; }
			}
		}
		flag = 0;
	}
	cout << tot << endl;
	return 0;
}
