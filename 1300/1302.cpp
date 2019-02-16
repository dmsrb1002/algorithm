#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main() {
	int n;
	cin >> n;
	string* p = new string[n];
	for (int i = 0; i < n; ++i) {
		cin >> p[i];
	}
	sort(p, p + n);
	int count = 0;
	int index = 0;
	int arr[1000] = { 0, };
	while (1) {
		if (index == n - 1) { break; }
		if (p[index] != p[index + 1]) {
			++index;
			++arr[count];
			++count;
		}
		else {
			++index;
			++arr[count];
		}
	}
	if (p[n - 1] == p[n - 2]) {
		++arr[count];
	}
	else {
		++count;
		++arr[count];
	}
	int max = arr[0];
	int match = 1;
	int tot=0;
	while (1) {
		if (arr[match] == 0) { break; }
		else {
			if (arr[match] > max) {
				max = arr[match];
				tot = match;
				++match;
			}
			else {
				++match;
			}
		}
	}
	int finish = 0;
	for (int i = 0; i < tot; ++i) {
		finish += arr[i];
	}
	cout << p[finish] << endl;


	return 0;
}
