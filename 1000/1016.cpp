#include<iostream>
#include<cmath>
using namespace std;
long long arr[1000001];

int main() {
	long long min, max;
	cin >> min >> max;
	for (long long i = 2; i * i <= max; ++i) {
		long long x = min / (i*i);
		if (min % (i*i) != 0) {
			++x;
		}
		while (x*(i*i) <= max) {
			arr[x*(i*i) - min] = 1;
			++x;
		}
	}
	int cnt = 0;
	for (int i = 0; i <= max - min ; ++i) {
		if (arr[i] == 0) {
			++cnt;
		}
	}
	cout << cnt << endl;
	return 0;
}
