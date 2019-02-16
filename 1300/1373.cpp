#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	string s; cin >> s;
	if (s.size() % 3 == 1)s="00" + s;
	else if (s.size() % 3 == 2)s="0" + s;
	int v = 0;
	
	for (int i = 0; i < s.size(); i += 3) {
		printf("%d", (s[i]-'0') * 4 + (s[i + 1]-'0') * 2 + s[i + 2]-'0');
	}
}
