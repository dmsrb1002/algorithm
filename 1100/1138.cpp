#include<iostream>
#include<vector>
using namespace std;

int A[11];
int main() {
	vector<int> v;
	int n; cin >> n;
	for (int i = 1; i <= n; ++i)scanf("%d", &A[i]);
	for (int i = n; i >= 1; --i)
	{
		v.insert(v.begin() + A[i], i);
	}
	for (int i = 0; i < n; ++i)printf("%d ", v[i]);
	return 0;
}
