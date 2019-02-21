#include <iostream>
#include <algorithm>
#include<vector>
#include<queue>
#define MAX 20001
using namespace std;
int d[MAX];
int main()
{
	vector<int> v[MAX];
	vector<int> w[MAX];
	int vn, en, start; cin >> vn >> en >> start;
	for (int i = 1; i <= vn; ++i)d[i] = 2e9;
	for (int i = 0; i < en; ++i) {
		int x, y, tmp; scanf("%d%d%d", &x, &y, &tmp);
		v[x].push_back(y); w[x].push_back(tmp);
	}
	priority_queue<pair<int,int> > q;
	d[start] = 0;
	q.push(pair<int, int>{0, start});
	while (!q.empty()) {
		int dis = -q.top().first;
		int node = q.top().second; q.pop();
		if (d[node] != dis)continue;
		for (int i = v[node].size()-1; i >= 0; --i) {
			int t1 = v[node][i]; int t2 = w[node][i];
			if (d[t1] > d[node] + t2) {
				d[t1] = d[node] + t2;
				q.push(pair<int, int>{-d[t1], t1});
			}
		}
	}
	for (int i = 1; i <= vn; ++i) {
		if (d[i] == 2e9) {
			cout << "INF"; printf("\n");
		}
		else {
			printf("%d\n", d[i]);
		}
	}
}
