#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int x1, y1, r1, x2, y2, r2,testcase;
	cin >> testcase;
	for (int i = 0; i < testcase; ++i) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		double p;
		int rd;
		p = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
		rd = abs(r2 - r1);
		
		if ((x2 == x1)&&(y2 == y1)) {
			if (r1==r2) { cout << -1 << endl; }
			else { cout << 0 << endl; }
		}
		else {
			if ((r1 + r2 == p) || (rd == p)) { cout << 1 << endl; }
			else if (p<r1 + r2&&p>rd) { cout << 2 << endl; }
			else { cout << 0 << endl; }
		}
		

		
	}
	return 0;
}
