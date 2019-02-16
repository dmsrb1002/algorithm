#include<iostream>
#pragma warning(disable:4996)
using namespace std;

int rev(int x) {
	int res=0;
	while (x!=0) {
		res = res * 10;
		res += x % 10;
		
		x = x / 10;
	}
	return res;
}
int main() {
	
	int x, y;
	cin >> x >> y;
	int res = rev(rev(x) + rev(y));
	cout << res << endl;
	
	
	return 0;
}
