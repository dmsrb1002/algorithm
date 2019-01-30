#include<iostream>
#include<algorithm>
using namespace std;
int n, m;
int map[51][51];
int ans = 0;
void bruteforce(int x,int y,int gap)
{
	if (x + gap > n-1 || y + gap > m -1 )return;
	int val = map[x][y];
	if (map[x + gap][y] == val && map[x][y + gap] == val && map[x + gap][y + gap] == val) {
		
		int size = (gap + 1) * (gap + 1);
		//cout << size << endl;
		ans = max(ans, size);
	}
	
}
int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			char tmp; cin >> tmp;
			map[i][j] = tmp - '0';
		}
	}
	
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			for (int g = 0; g < min(n, m); ++g) {
				bruteforce(i, j, g);
			}
		}
	}
	cout << ans << endl;
}
