#include<iostream>
using namespace std;

int main() {
	int testcase;
	cin >> testcase;
	
	for (int i = 0; i < testcase; ++i) {
		int a, b;
		
		cin >> a >> b;
		int tot = 1;
		for (int j = 0; j < b; ++j) {
			
			tot *= a;
			if (tot % 10 == 0) { tot = 10; break; }
			else if (tot > 10) { tot %= 10; }
			
		}
		cout << tot << endl;
	}
	
	return 0;
}
