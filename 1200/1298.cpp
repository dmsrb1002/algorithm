#include<iostream>
#include<vector>
using namespace std;
int n, m;
bool arr[101][101];
vector<bool> checked;
vector<int> aMatch; vector<int> bMatch;
bool dfs(int a)
{
	if (checked[a])return false;
	checked[a] = true;
	for (int i = 1; i <= n; ++i) {
		if (arr[a][i]) {
			if (bMatch[i] == -1) {
				bMatch[i] = a, aMatch[a] = i;
				return true;
			}
			else {
				if (dfs(bMatch[i])) {
					bMatch[i] = a, aMatch[a] = i;
					return true;
				}
			}
		}
	}
	return false;
}
int main()
{
	cin >> n >> m;
	for (int i = 0; i < m; ++i) {
		int x, y; scanf("%d%d", &x, &y);
		arr[x][y] = true;
	}
	int ans = 0;
	aMatch = vector<int>(n + 1, -1);
	bMatch = vector<int>(n + 1, -1);
	for (int i = 1; i <= n; ++i) {
		checked = vector<bool>(n + 1, false);
		if (dfs(i)) ++ans;
	}
	cout << ans << endl;
}
