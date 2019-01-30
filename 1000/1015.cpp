#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	int* b = new int[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for (int i = 0; i < n; ++i) {
		int min = a[0];
		int index = 0;
		for (int j = 1; j < n; ++j) {
			if (min > a[j]) {
				min = a[j];
				index = j;
			}
		}
		b[index] = i;
		a[index] = 1001;
	}


	for (int i = 0; i < n; ++i) {
		cout << b[i] << " ";
	}
	
	delete[] a;
	delete[] b;
	a = nullptr;
	b = nullptr;
	return 0;
}
