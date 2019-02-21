#include <iostream>
using namespace std;
int arr[500001];
int sorted[500001];
long long ans = 0;
void merge(int a[],int m,int mid,int n)
{
	int i = m;
	int j = mid + 1;
	int k = m;
	while (i <= mid && j <= n) {
		if (arr[i] <= arr[j]) {
			sorted[k] = arr[i];
			++i; 
		}
		else {
			sorted[k] = arr[j];
			++j; ans += mid + 1 - i;
		}
		++k;
	}
	if (i > mid) {
		for (int t = j; t <= n; ++t) {
			sorted[k] = arr[t];
			++k; 
		}
	}
	else {
		for (int t = i; t <= mid; ++t) {
			sorted[k] = arr[t];
			++k; 
		}
	}
	for (int t = m; t <= n; ++t) {
		a[t] = sorted[t];
	}
}
void mergesort(int a[],int m,int n)
{
	if (m < n) {
		int mid = (n + m) / 2;
		mergesort(a,m, mid);
		mergesort(a,mid + 1, n);
		merge(a,m,mid,n);
	}
}
int main()
{
	int n; cin >> n;
	for (int i = 0; i < n; ++i)scanf("%d", &arr[i]);
	mergesort(arr,0, n-1);
	cout << ans << endl;
}
