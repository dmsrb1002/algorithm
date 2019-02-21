#include<iostream>
#include <stack>
#include <vector>
#include<algorithm>
using namespace std;

vector<long long> h;
int main()
{
	int n;
	scanf("%d", &n);

	long long ret = 0;
	stack<int> s; 


	for (int i = 0; i < n; i++) 
	{
		int a;

		scanf("%d", &a);
		h.push_back(a);
	}

	h.push_back(0);

	for (int i = 0; i < h.size(); i++)
	{

		while (!s.empty() && h[s.top()] >= h[i])
		{
			int j = s.top();
			s.pop();

			int width = i;

			if (!s.empty())
				width = (i - s.top() - 1);

			ret = max(ret, width * h[j]);
		}

		s.push(i);

	}
	printf("%lld", ret);

	return 0;
}
