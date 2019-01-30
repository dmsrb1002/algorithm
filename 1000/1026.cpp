#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	int* b = new int[n];
	int* c = new int[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for (int i = 0; i < n; ++i) {
		cin >> b[i];
		c[i] = b[i];
	}
	sort(a, a + n);
	sort(c, c + n);
	int tot = 0;
	for (int i = 0; i < n; ++i) {
		tot += a[i] * c[n - i - 1];
	}
	cout << tot << endl;
	

	delete[] a;
	delete[] b;
	delete[] c;
	a = nullptr;
	b = nullptr;
	c = nullptr;
}
