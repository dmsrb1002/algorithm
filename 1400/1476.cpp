#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	int e, s, m;
	cin >> e >> s >> m;
	int a=1, b=1, c=1;
	int cnt = 1;
	while (1) {
		if (a==e && b==s && c==m)break;
		++a; ++b; ++c; ++cnt;
		if (a > 15)a = 1;
		if (b > 28)b = 1;
		if (c > 19)c = 1;
	}
	cout << cnt << endl;
}
