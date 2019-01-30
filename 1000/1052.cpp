#include<iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int nc = n;
	int count = 0;
	int tot = 0;
	while (1) {
		while (1) {
			if (nc % 2 == 1) {
				++count;
			}
			nc = nc / 2;
			if (nc == 0) { break; }
		}
		if (count <= k) { break; }
		else {
			++tot;
			++n;
			nc = n;
			count = 0;
		}
	}

	cout << tot << endl;
	
	return 0;
}
