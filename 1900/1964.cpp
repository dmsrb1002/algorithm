#include<iostream>
#include<algorithm>
using namespace std;
#pragma warning (disable:4996)
int main() {
	long long int n;
	scanf("%lld", &n);
	printf("%lld", (5 * n + 3*n*(n - 1)/2 - n + 1)%45678);
	return 0;
}
