#include<iostream>
using namespace std;
int main() {
	int a, b,n;
	cin >> a >> b >> n;
	int save = a%b;
	int count = 1;
	int result = 0;
	for (int i = 0; i < n; ++i) {
		save *= 10;
		while (1) {
			if (save < b*count) {
				break;
			}
			else {
				++count;
			}
		}
		count -= 1;
		result = count;
		save = save - b*count;
		count = 1;
	}
	cout << result << endl;



	
	return 0;
}
