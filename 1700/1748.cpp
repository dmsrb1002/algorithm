#include<iostream>
#include<algorithm>


using namespace std;

#pragma warning(disable:4996)


int main() {
	int n;
	cin >> n;
	int nc = n;
	int num = 0;
	while (1) {
		n = n / 10;
		++num;
		if (n == 0) {
			break;
		}
	}
	int a = 1;
	int b = 1;
	int tot = 0;
	int count = 1;
	if (num == 1) {
		cout << nc << endl;
	}
	else {
		for (int i = 0; i < num - 1; ++i) {

			tot += 9 * b;
			a = a * 10;
			++count;
			b = a*count;

		}
		tot += (nc - a + 1)*count;

		cout << tot << endl;
	}
	return 0;
}
