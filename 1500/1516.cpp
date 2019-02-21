#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<vector<int> > graph;
vector<int> time;
vector<int> d;
vector<int> indegree;
int n;
void bfs()
{
	queue<int> q;
	for (int i = 1; i <= n; ++i) {
		if (indegree[i] == 0) {
			q.push(i); d[i] = time[i];
		}
	}
	while (!q.empty()) {
		int now = q.front(); q.pop();
		for (int i = 0; i < graph[now].size(); ++i) {
			int next = graph[now][i];
			indegree[next]--;
			if (d[next] < d[now] + time[next]) {
				d[next] = d[now] + time[next];
			}
			if (indegree[next] == 0)q.push(next);
		}
	}
}

int main()
{
	cin >> n;
	graph.resize(n + 1); time.resize(n + 1); d.resize(n + 1); indegree.resize(n + 1);
	for (int i = 1; i <= n; ++i) {
		scanf("%d", &time[i]);
		while (1) {
			int input; scanf("%d", &input);
			if (input == -1)break;
			else {
				graph[input].push_back(i);
				indegree[i]++;
			}
		}
	}
	bfs();
	for (int i = 1; i <= n; ++i) {
		printf("%d\n", d[i]);
	}
}
