#include<iostream>
#include<algorithm>

using namespace std;
int n,m;
int parents[201];
int priority[201];

int findParent(int a)
{
	if (a == parents[a])return a;
	else return parents[a]= findParent(parents[a]);
}
void unionSet(int x,int y)
{
	int a = findParent(x);
	int b = findParent(y);
	if (a == b)return;
	if (priority[a] > priority[b])parents[b] = a;
	else if (priority[a] == priority[b])
	{
		parents[b] = a;
		priority[a]++;
	}
	else parents[a] = b;
	
}
int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)parents[i] = i;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			int tmp; scanf("%d", &tmp);
			if (tmp)unionSet(i, j);
		}
	}
	
	int a; cin >> a;
	a = findParent(a);
	bool flag = true;
	
	for (int i = 1; i<m; ++i)
	{
		int tmp; scanf("%d", &tmp);
		if (a != parents[tmp]) {
			flag = false;
			break;
		}
	}
	flag ? cout << "YES" << endl : cout << "NO" << endl;
}
