#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int* p = new int[n];
	p[0] = 1, p[1] = 3;
	for (int i = 2; i <= n; ++i) {
		p[i] = p[i - 1] * 2 + p[i - 2];
		p[i] = p[i] % 9901;
	}
	cout << p[n] << endl;
	return 0;
}
