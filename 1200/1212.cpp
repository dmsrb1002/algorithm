#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s; cin >> s; int arr[3];
	int first = s.at(0) - '0';
	for (int j = 2; j >= 0; --j) {
		arr[j] = first % 2;
		first = first / 2;
	}
	if (arr[0] == 0 && arr[1]!=0) { printf("%d%d", arr[1], arr[2]); }
	else if (arr[0] == 0 && arr[1] == 0)printf("%d", arr[2]);
	else {
		for (int j = 0; j <3; ++j) {
			printf("%d", arr[j]);
		}
	}
	
	for (int i = 1; i < s.size(); ++i) {
		int x = s.at(i) - '0';
		for (int j = 2; j >=0; --j) {
			arr[j] = x % 2;
			x = x / 2;
		}
		for (int j = 0; j <3; ++j) {
			printf("%d", arr[j]);
		}
	}
}
