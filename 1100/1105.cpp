#include<iostream>
#include<vector>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	vector<int> v1; vector<int> v2;
	int ac, bc; ac = a; bc = b;
	int count1=0, count2 = 0;
	while (ac>=1) {
		v1.push_back(ac % 10);
		ac = ac / 10;
		++count1;
		
	}
	while (bc >= 1) {
		v2.push_back(bc % 10);
		bc /= 10; 
		++count2;
	}
	int output = 0;
	if (count1 != count2) { output = 0; }
	else {
		int size = (int)v1.size()-1;
		while (size>=0) {
			if (v1[size] == v2[size]) {
				if (v1[size] == 8) {
					++output; --size;
				}
				else {
					--size;
				}
			}
			else { break; }
		}
	}
	cout << output << endl;
	return 0;
}
