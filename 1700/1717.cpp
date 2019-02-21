#include<iostream>
#include<vector>
using namespace std;
int n, m;
vector<int> p;
int findv(int f)
{
	if (p[f] < 0)return f;
	p[f] = findv(p[f]);
	return p[f];
}
void merge(int a,int b)
{
	a = findv(a);
	b = findv(b);
	if (a == b)return;
	p[b] = a;
}

int main()
{
	cin >> n >> m;
	p.resize(n + 1, -1);
	for (int i = 0; i < m; ++i) {
		int flag; scanf("%d", &flag);
		if (flag==0) {
			int x, y; scanf("%d%d", &x, &y); merge(x, y);
		}
		else {
			int x, y; scanf("%d%d", &x, &y); 
			if (findv(x) == findv(y))printf("%s\n", "YES");
			else printf("%s\n", "NO");
		}
	}
}
