#include<iostream>
using namespace std;

int main() {
	int n;
	int a, b;
	cin >> n >> a >> b;
	int round = 0;
	while (a / 2 + a % 2 != b / 2 + b % 2) {
		a = a / 2 + a % 2;
		b = b / 2 + b % 2;
		++round;
	}
	++round;
	cout << round << endl;
	
	return 0;
}
