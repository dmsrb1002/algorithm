#include<iostream>
#include<algorithm>


using namespace std;

#pragma warning(disable:4996)
int N, S, cnt;
int val[20], currentsum;

void dfs(int current) {
	if (current == N)return;

	if (currentsum + val[current] == S)++cnt;

	dfs(current + 1);

	currentsum += val[current];
	dfs(current + 1);
	currentsum -= val[current];



}



int main() {
	scanf("%d %d", &N, &S);
	for (int i = 0; i < N; ++i) {
		scanf("%d", &val[i]);
	}
	dfs(0);
	cout << cnt << endl;


	return 0;

}
