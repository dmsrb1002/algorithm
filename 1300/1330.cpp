#include<iostream>
#include<string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int a, b; cin >> a >> b;
	if (a > b)
	{
		cout << ">" << endl;
	}
	else if (a < b)
	{
		cout << "<" << endl;

	}
	else
	{
		cout << "==" << endl;
	}
}
