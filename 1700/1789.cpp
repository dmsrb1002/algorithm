#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;




int main() {
	long long int s;
	scanf("%lld", &s);
	long long int n = (long long int)sqrt(s);
	while (1) {
		if (n*(n + 1) > s * 2) { break; }
		else {
			++n;
		}
	}
	cout << n - 1 << endl;
	return 0;

}
