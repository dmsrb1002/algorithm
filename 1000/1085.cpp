#include<iostream>
using namespace std;

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	int arr[4];
	arr[0] = x;
	arr[1] = w - x;
	arr[2] = y;
	arr[3] = h - y;
	int min = arr[0];
	for (int i = 1; i < 4; ++i) {
		
		if (min > arr[i]) {
			min = arr[i];
		}
		
	}
	cout << min << endl;
	return 0;
}
