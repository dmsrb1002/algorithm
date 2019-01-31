#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		v[i] = i + 1;
	}
	int m;
	cin >> m;
	int* p = new int[n];
	int count = m - 1;
	for (int i = 1; i <= n; ++i) {
		if ((int)v.size()>count) {
			
			p[i-1] = v[count];
			v.erase(v.begin()+count);
			
		}
		else {
			
			while (1) {
				if (count < (int)v.size()) { break; }
				count -= v.size();
			}
			if (count >= 0&&count<(int)v.size()) {
				
				p[i - 1] = v[count];
				v.erase(v.begin() + count);
				
			}
		}
		count += m - 1;
	}
	cout << "<";
	for (int i = 0; i < n-1; ++i) {
		cout << p[i] << ", ";
	}
	cout << p[n - 1] << ">" << endl;
	delete[] p;
	return 0;
}
