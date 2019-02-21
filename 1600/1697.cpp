#include <iostream>
#include<queue>

using namespace std;
#define MAX 100000
bool visited[100001];
int main() {
	queue<pair<int, int> > q;
	int n, k;
	cin >> n >> k;
	q.push({ n, 0 });
	while (!q.empty()) {
		int current = q.front().first;
		int cnt = q.front().second;
		q.pop();
		if (current <0 || current > MAX)continue;
		if (visited[current])continue;
		visited[current] = true;
		if (current == k) {
			cout << cnt << endl;
			return 0;
		}
		q.push({ current - 1,cnt+1 });
		q.push({ current + 1,cnt+1 });
		q.push({ current * 2 ,cnt+1 });

	}

	
}
