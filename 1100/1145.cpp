#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int arr[5];
	for (int i = 0; i < 5; ++i) {
		cin >> arr[i];
	}
	sort(arr, arr + 5);
	int count = 1;
	int tot = 0;
	int maxarr[5];
	for (int j = 0; j < 5; ++j) {


		while (1) {
			for (int i = 0; i < 5; ++i) {
				if ((arr[j] * count) % arr[i] == 0) {
					++tot;
				}
			}
			if (tot >= 3) { break; }
			else {
				++count;
				tot = 0;
			}
		}


		maxarr[j] = count*arr[j];
		count = 1;
		tot = 0;
	}
	sort(maxarr, maxarr + 5);
	cout << maxarr[0] << endl;
	return 0;
}
