#include<iostream>
#include<string>
using namespace std;
int A[26];
int main()
{
	int n; cin >> n;
	string s;
	for (int i = 0; i < n; ++i)
	{
		cin >> s;
		A[s[0] - 'a']++;
	}
	bool flag = true;
	for (int i = 0; i < 26; ++i)
	{
		if (A[i] >= 5) {
			printf("%c", i + 'a');
			flag = false;
		}

	}
	if (flag) {
		cout << "PREDAJA" << endl;
	}

}
