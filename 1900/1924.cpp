#include<iostream>
#include<string>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	int tot = 0;
	int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	string str[7] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
	for (int i = 0; i < x - 1; ++i) {
		tot += arr[i];
	}
	tot += y;
	cout << str[tot % 7] << endl;
	return 0;
}
