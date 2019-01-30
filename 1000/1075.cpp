#include<iostream>
using namespace std;

int main() {
	int n, f,x,m=1;
	int count = 0;
	cin >> n >> f;
	n = n - n % 100;
	while (1) {
		if (n%f == 0) {
			break;
		}
		else {
			++n; ++count;
		}
	}
	if (count < 10) { cout << "0" << count << endl; }
	else {
		cout << count << endl;
	}
	return 0;
}
