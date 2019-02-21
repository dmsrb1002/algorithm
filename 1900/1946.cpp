#include<iostream>
#include<algorithm>
using namespace std;


pair<int, int> p[100001];
int main()
{
	int testcase;
	cin >> testcase;
	for (int t = 0; t < testcase; ++t) {
		int n;
		scanf("%d", &n);
		for (int i = 1; i <= n; ++i) {
			int x, y;
			scanf("%d %d", &x, &y);
			p[x].first = x;
			p[x].second = y;
		}
		int pivot = p[1].second;
		int cnt = 1;
		for (int i = 2; i <= n; ++i) {
			if (p[i].second < pivot) {
				pivot = p[i].second;
				++cnt;
			}
		}
		
		
		printf("%d\n", cnt);
	}
}
