#include<iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int** p = new int*[m];
	for (int i = 0; i < m; ++i) 
	{
		p[i] = new int[2];
		cin >> p[i][0];
		cin >> p[i][1];
	}
	int min1 = p[0][0];
	int min2 = p[0][1];
	int x = 0;
	for (int i = 1; i < m; ++i) {
		if (min1 > p[i][0]) {
			min1 = p[i][0];
			x = i;
		}
		if (min2 > p[i][1]) {
			min2 = p[i][1];
		}
	}
	int tot1 = 0;
	int tot2 = 0;
	int index = 0;
	if (min1 < 6 * min2) {
		for (int i = 0; i < n / 6; ++i) {
			tot1 += min1;
			++index;
		}
		tot2 = tot1;
		n = n - 6 * index;
		tot1 += n*min2;
		tot2 += min1;
		if (tot1 > tot2) { cout << tot2 << endl; }
		else { cout << tot1 << endl; }
	}
	else {
		tot1 = min2 * n;
		cout << tot1 << endl;
	}

	for (int i = 0; i < m; ++i) {
		delete[] p[i];
	}
	delete[] p;
	p = nullptr;
}
