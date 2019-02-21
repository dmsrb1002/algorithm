#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	double temp;
	double max=0;
	double tot = 0;
	for (int i = 0; i < n; ++i) {
		cin >> temp;
		if (max < temp) {
			max = temp;
		}
		tot += temp;
	}
	printf("%.2lf", ((tot - max) / max * 100 + 100) / n);
	return 0;
}
