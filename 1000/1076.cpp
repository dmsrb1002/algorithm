#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main() {
	string arr[10] = { "black","brown","red","orange","yellow","green","blue","violet","grey","white" };
	string s;
	long long int tot = 1;
	long long int a[3];
	for (int i = 0; i < 3; ++i) {
		cin >> s;
		for (int j = 0; j < 10; ++j) {
			if (i == 2&&s==arr[j]) {
				for (int k = 0; k < j; ++k) {
					tot *= 10;
				}
			}
			else if (s == arr[j]) {
				a[i] = j;
			}
		}
	}
	cout << a[0] * tot * 10 + a[1] * tot << endl;
}
