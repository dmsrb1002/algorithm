#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
#define MAX 100000
int arr[MAX + 1];
int rec(int num)
{
	for (int i = 0; i < num; ++i)
	{
		if (!arr[i])continue;
		else {
			if (num%i == 0)return num/i;
		}
	}
	return 0;
}
int main()
{
	int a, b; cin >> a >> b;
	for (int i = 2; i <= MAX; ++i)arr[i] = i;
	int idx = 2;
	int mul = 2;
	while (pow(idx, 2) <= MAX) {
		while (idx*mul <= MAX) {
			arr[idx*mul] = 0;
			++mul;

		}
		++idx;
		mul = 2;
	}
	int ans = 0;
	for (int i = a; i <= b; ++i)
	{
		int cnt = 0;
		int num = i;
		while (num = rec(num))
		{

			++cnt;
		}
		
		if (arr[cnt+1])++ans;
	}
	cout << ans << endl;
	
}
