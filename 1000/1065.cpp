#include<iostream>
using namespace std;

int main() {
	int x;
	int tot = 0;
	cin >> x;
	if (x < 100) {
		tot = x;
	}
	else if (x == 1000) { tot = 144; }
	else{
		tot += 99;
		for (int i = 0; i < x - 100 + 1; ++i) {
			int a = (i+100) % 10;
			int b = ((i+100) / 10) % 10;
			int c = ((i+100) / 100) % 10;
			if (a-b == b-c) { ++tot; }
		}
		

	}
	cout << tot << endl;
	return 0;
}
