#include<iostream>
using namespace std;

int main()
{
	int x; cin >> x;
	int n = 1;
	while (1) {
		if (n*(n + 1) / 2 >= x)break;
		else ++n;
	}
	int shift = x - n*(n - 1) / 2   - 1;
	int start, end;
	if (n % 2 == 0) {
		start = 1 + shift;end = n -shift;
		
	}
	else {
		start = n - shift;end = 1 + shift;
		
	}
	cout << start << "/" << end << endl;
}
