#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int main() {
	int testcase;
	cin >> testcase;
	
	for (int i = 0; i < testcase; ++i) {
		int start[2], end[2];
		cin >> start[0] >> start[1] >> end[0] >> end[1];
		int n;
		cin >> n;
		vector<int> x(n);
		vector<int> y(n);
		vector<int> r(n);

		for (int j = 0; j < n; ++j) {
			cin >> x[j] >> y[j] >> r[j];
		}
		int count = 0;
		for (int j = 0; j < n; ++j) {
			double d1 = sqrt((start[0] - x[j])*(start[0] - x[j]) + (start[1] - y[j])*(start[1] - y[j]));

			if (d1 < r[j]) { ++count; }

			double d2 = sqrt((end[0] - x[j])*(end[0] - x[j]) + (end[1] - y[j])*(end[1] - y[j]));
			if (d2 < r[j]) { ++count; }
			if (d1 < r[j] && d2 < r[j]) {
				count -= 2;
			}
			

		}
		cout << count << endl;
	}
	return 0;
}
