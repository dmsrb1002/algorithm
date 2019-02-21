#include<iostream>
#include<vector>
#include<queue>
#include<stdio.h>
#include<string.h>
#include<memory.h>

using namespace std;

struct NODE
{
	vector<pair<int, int> > v;	//1.노드 2.가중치
	int weight_sum = 0;
};
NODE arr[10001];
NODE cp_arr[10001];
bool visited[10001];
int main()
{

	int n; cin >> n;
	for (int i = 1; i < n; ++i) {
		int x, y, w; scanf("%d %d %d", &x, &y, &w);
		arr[x].v.push_back(pair<int, int>({ y,w }));
		arr[y].v.push_back(pair<int, int>({ x,w }));
		cp_arr[x].v.push_back(pair<int, int>({ y,w }));
		cp_arr[y].v.push_back(pair<int, int>({ x,w }));

	}
	int max_node;
	queue<int> q; q.push(1); visited[1] = true; int max_val = 0;
	while (!q.empty()) {
		int node = q.front(); q.pop();
		for (int i = 0; i < cp_arr[node].v.size(); ++i) {
			int idx = cp_arr[node].v[i].first;
			if (visited[idx] == false) {
				visited[idx] = true;
				cp_arr[idx].weight_sum = cp_arr[node].weight_sum + cp_arr[node].v[i].second;
				if (max_val <= cp_arr[idx].weight_sum) {
					max_val = max(max_val, cp_arr[idx].weight_sum);
					max_node = idx;
				}
				q.push(idx);
			}
		}
	}
	for (int i = 1; i <= n; ++i)visited[i] = false;
	queue<int> q1; q1.push(max_node); visited[max_node] = true; int max_val1 = 0;
	while (!q1.empty()) {
		int node = q1.front(); q1.pop();
		for (int i = 0; i < arr[node].v.size(); ++i) {
			int idx = arr[node].v[i].first;
			if (visited[idx] == false) {
				visited[idx] = true;
				arr[idx].weight_sum = arr[node].weight_sum + arr[node].v[i].second;
				if (max_val1 <= arr[idx].weight_sum) {
					max_val1 = max(max_val1, arr[idx].weight_sum);
					
				}
				q1.push(idx);
			}
		}
	}

	cout << max_val1 << endl;
}
