#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
using namespace std;

typedef long long ll;

int f(int n)
{
	int nc = n;
	int num = 0;
	while (1) {
		n = n / 10;
		++num;
		if (n == 0) {
			break;
		}
	}
	int a = 1;
	int b = 1;
	int tot = 0;
	int count = 1;
	if (num == 1) {
		return nc;
	}
	else {
		for (int i = 0; i < num - 1; ++i) {

			tot += 9 * b;
			a = a * 10;
			++count;
			b = a*count;

		}
		tot += (nc - a + 1)*count;

		return tot;
	}
}
int main() {
	ll front = 9; //앞자리수
	int iter = 1; //자릿수
	int n, k; cin >> n >> k;
	ll sum = 0;//자릿수의 합
	ll start = 0;//
	if (f(n) < k) {
		cout << -1 << endl;
		return 0;
	}
	while (1) {
		if (sum + front * iter >= k)break;
		start += front;
		sum += front * iter;
		front *= 10; ++iter;
	}
	
	start += 1;
	ll nsum = sum;
	while (1)
	{
		if (nsum + iter >= k)break;
		++start;
		nsum += iter;
	
	}
	string s;
	s = to_string(start);
	cout << s[k - nsum - 1] << endl;
	
}
