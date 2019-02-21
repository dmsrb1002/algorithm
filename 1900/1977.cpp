#include<iostream>
#include<algorithm>
using namespace std;

#pragma warning(disable:4996)


int main() {
	int n, m;
	cin >> n >> m;
	int i1, i2;
	double d1 = sqrt(n);
	double d2 = sqrt(m);
	if (d1 - (int)d1 == 0) {
		i1 = (int)d1;
	}
	else {
		i1 = (int)d1 + 1;
	}
	if (d2 - (int)d2 == 0) {
		i2 = (int)d2;
	}
	else {
		i2 = (int)d2;
	}
	int tot = 0;
	for (int i = i1; i <= i2; ++i) {
		tot += i*i;
	}
	if (tot == 0) {
		cout << -1 << endl;
	}
	else {
		cout << tot << endl;
		cout << i1*i1 << endl;
	}
	return 0;

}
