#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int nc = n;
	int count = 0;
	while (1) {
		n = (n % 10 + n / 10) % 10 + (n % 10) * 10;
		++count;
		if (n == nc) { break; }
	}
	cout << count << endl;
	return 0;
}
