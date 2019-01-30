#include <iostream>
#include<algorithm>
using namespace std;
char A[51][51];
int n, m;
int min_v = 987654321;
int tot = 0;
void swaping(int start, int end)
{
	
	int cnt = 0;
	if (start + 7 > n || end + 7 > m)return;
	++tot;
	for (int i = start; i < start + 8; ++i) {
		for (int j = end; j < end + 8; ++j) {
			
			if ((i + j) % 2 == 0 && A[i][j] == 'B')++cnt;
			if ((i + j) % 2 == 1 && A[i][j] == 'W')++cnt;
		}
		
	}
	
	cnt = min(cnt, 64 - cnt);
	min_v = min(min_v, cnt);
	swaping(start, end + 1);
	//swaping(start + 1, end);
}
int main()
{
	cin >> n >> m;
	char tmp;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			cin >> A[i][j];
		}
	}
	for (int i = 1; i <= n; ++i) {
		swaping(i, 1);
	}
	
	cout << min_v << endl;
	
}
