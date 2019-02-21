#include<iostream>
using namespace std;
#include<algorithm>
#pragma warning (disable:4996)


int arr[100001];
void rec(int key, int n)
{
	int start = 0;
	int e = n - 1;
	int mid;

	while (e - start >= 0) {
		mid = (e + start) / 2;
		if (key == arr[mid]) {
			printf("1\n");
			return;
		}
		else if (key > arr[mid]) {
			start = mid + 1;
		}
		else {
			e = mid - 1;
		}
	}
	printf("0\n");
	return ;
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		scanf("%d", &arr[i]);
	}
	sort(arr, arr + n);
	int m;
	cin >> m;
	for (int i = 0; i < m; ++i) {
		int tmp;
		scanf("%d", &tmp);
		rec(tmp,n);
	}
	
	
}
