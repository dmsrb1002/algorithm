#include<math.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int arr[31];

vector<int> v1, v2;
int n, c,ans=0;
void dfs(int s, int e, int sum,int c,vector<int>& v)
{
	if (sum > c)return;
	if (s > e) return v.push_back(sum);
	dfs(s + 1, e, sum, c,v);
	dfs(s + 1, e, sum + arr[s], c,v);
	
}
int main()
{	
	
	cin >> n >> c;
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	dfs(0, n/2 - 1, 0, c, v1);
	sort(v1.begin(),v1.end());
	dfs(n/2,n-1 , 0, c, v2);
	sort(v2.begin(), v2.end());
	
	int e = v2.size() - 1;
	for (int s = 0; s < v1.size(); s++) {
		while (e >= 0 && v1[s] + v2[e] > c) e--;
		ans += e + 1;
	}
	cout << ans << endl;
	
}
