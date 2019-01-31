#include<math.h>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool compare(const string &a, const string &b)
{
	if (a.size() != b.size()) {
		return a.size() < b.size();
	}
	else {
		return a < b;
	}
}
int main()
{
	string arr[20002];
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	
	sort(arr, arr + n, compare);
	
	for (int i = 0; i <= n; ++i) {
		if (arr[i] != arr[i + 1]) {
			cout << arr[i] << endl;
		}
	}
	
	
}
