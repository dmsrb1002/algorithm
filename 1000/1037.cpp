#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int a;
	cin >> a;
	int* p = new int[a];
	int tot = 1;
	for (int i = 0; i < a; ++i) {
		cin >> p[i];
	}
	sort(p,p+a);
	tot = p[0] * p[a - 1];
	cout << tot << endl;
	delete[] p;
	return 0;
}
