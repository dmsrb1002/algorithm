#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
char A[257];
int main()
{
	while (1)
	{
		cin.getline(A, 257); if (A[0] == '#')break;

		int cnt = 0;
		for (int i = 0; i < strlen(A); ++i)
		{
			if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u' ||
				A[i] =='A' || A[i]=='E' || A[i] =='I' || A[i]=='O' || A[i]=='U')++cnt;
		}
		cout << cnt << endl;
	}
}
