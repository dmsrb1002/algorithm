#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int arr1[30] = { 0 };
int arr2[30] = { 0 };
int main()
{
	char c1;
	while (1) {
		c1 = getchar();
		if (c1 == '\n')break;
		++arr1[c1 - 'a'];
		
	}
	while (1) {
		c1 = getchar();
		if (c1 == '\n')break;
		++arr2[c1 - 'a'];

	}
	
	int ans = 0;
	
	for (int i = 0; i < 30; ++i) {
		ans += abs((arr1[i] - arr2[i]));
	}
	cout << ans << endl;
}
