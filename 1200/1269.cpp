#include<iostream>
#include<algorithm>
using namespace std;
int A[200001];
int B[200001];

int main()
{
	int a, b; cin >> a >> b;
	for (int i = 0; i < a; ++i)scanf("%d", &A[i]);
	for (int i = 0; i < b; ++i)scanf("%d", &B[i]);
	sort(A, A + a);
	sort(B, B + b);
	int idx1 = 0, idx2 = 0, cnt = 0;
	while (idx1 < a && idx2 < b)
	{
		if (A[idx1] == B[idx2])
		{
			++cnt; ++idx1; ++idx2;
		}
		else if (A[idx1] > B[idx2])++idx2;
		else ++idx1;
	}
	cout << a - cnt + b - cnt << endl;
}
