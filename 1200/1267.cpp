#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int arr[21];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	int ans1 = 0;
	for (int i = 0; i < n; ++i) {
		ans1 += (arr[i] / 30) * 10 + 10;
	}
	int ans2 = 0;
	for (int i = 0; i < n; ++i) {
		ans2 += (arr[i] / 60) * 15 + 15;
	}
	if (ans1 < ans2) {
		cout << "Y" << " " << ans1 << endl;
	}
	else if (ans1 == ans2) {
		cout << "Y" << " " << "M" << " " << ans1 << endl;
	}
	else {
		cout << "M" << " " << ans2 << endl;
	}
}
