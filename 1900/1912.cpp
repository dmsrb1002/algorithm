#include<iostream>
#pragma warning(disable:4996)
using namespace std;

int main() {
	int arr[100000];
	int n;
	cin >> n;
	int max = -1000;
	for (int i = 0; i < n; ++i) {
		scanf("%d", &arr[i]);
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	int currentNum, tot=0;
	for (int i = 1; i < n; ++i) {
		currentNum = arr[i-1];
		tot += currentNum;
		if (arr[i] + tot < max) {
			if (tot < 0) {
				tot = 0;
			}
		}
		else {
			max = arr[i]+tot;
		}
		
	}
	cout << max << endl;
	return 0;
}
