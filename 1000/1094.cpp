#include<iostream>
#include<string>
using namespace std;

int main() {
	int x;
	cin >> x;
	int count = 0;
	while (1) {
		if (x % 2 == 1) { ++count; x = x / 2; }
		else { x = x / 2; }

		if (x == 0) { break; }
	}
	cout << count << endl;
	
	
	return 0;
}
