#include <iostream>
#include <algorithm>
#include <vector>
#include<stdio.h>
#include<string.h>
using namespace std;

int n, m;
vector<int> adj[50];
int aMatch[50], bMatch[50];
bool visited[50];

bool dfs(int a) {
	if (visited[a]) return false;
	visited[a] = true;
	for (int b : adj[a])
		if (bMatch[b] == -1 || dfs(bMatch[b])) {
			aMatch[a] = b;
			bMatch[b] = a;
			return true;
		}
	return false;
}

int di[] = { -1,0,1,-1,0,1 };
int dj[] = { -1,-1,-1,1,1,1 };
int main()
{
	int testcase; cin >> testcase;
	for (int t = 0; t < testcase; ++t) {
		bool map[10][10]; int broken = 0;
		scanf("%d%d", &n, &m);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				char c; cin >> c;
				if (c == 'x') {
					map[i][j] = true; ++broken;
				}
				else map[i][j] = false;
			}
		}
		int nodeNum[10][10]; int A = 0, B = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j += 2) {
				adj[A].clear();
				nodeNum[i][j] = A++;
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 1; j < m; j += 2) {
				nodeNum[i][j] =B++;
			}
		}
		for (int j = 0; j < m; j += 2) {
			for (int i = 0; i < n; ++i) {
				if (map[i][j])continue;
				for (int d = 0; d < 6; ++d) {
					int ni = i + di[d];
					int nj = j + dj[d];
					if (ni < 0 || ni >= n || nj < 0 || nj >= m || map[ni][nj]) continue;
					adj[nodeNum[i][j]].push_back(nodeNum[ni][nj]);
				}
			}
		}
		memset(aMatch, -1, sizeof(aMatch));
		memset(bMatch, -1, sizeof(bMatch));
		int size = 0;
		for (int start = 0; start < A; start++) {
			memset(visited, false, sizeof(visited));
			if (dfs(start)) size++;
		}
		cout << n*m - size - broken << endl;
	}
}
