#include<iostream>

using namespace std;

int main() {
	char ch[8][8];
	int count = 0;
	for (int i = 0; i < 8; ++i) {
		for (int j = 0; j < 8; ++j) {
			cin >> ch[i][j];
			if (i%2==0) {
				if (j % 2 == 0 && ch[i][j] == 'F') { ++count; }
				
			}
			else if (i % 2 == 1) {
				if (j % 2 == 1 && ch[i][j] == 'F') { ++count; }
			}
		}
	}
	cout << count << endl;
	return 0;
}
