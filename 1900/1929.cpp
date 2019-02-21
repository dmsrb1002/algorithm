#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
#define MAX 1000000
int arr[MAX + 1];

int main()
{	
	int m,n;
	cin >> m >> n;
		
	for (int i = 2; i <= MAX; ++i) {
		arr[i] = i;
	}
		
	int idx = 2;
	int mul = 2;
	while (pow(idx,2) <= MAX) {

		while (idx*mul<=MAX) {
			arr[idx*mul] = 0;
			++mul;
			
		}
		++idx;
		mul = 2;
	}
	for (int i = m; i <= n; ++i) {
		if (arr[i] != 0) {
			printf("%d\n", arr[i]);
		}
	}
	
	
}
