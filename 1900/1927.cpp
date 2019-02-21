#include<iostream>
#include<queue>
using namespace std;


int main()
{
	int n; cin >> n;
	priority_queue<int> q;
	for (int i = 0; i < n; ++i) {
		int tmp; scanf("%d", &tmp);
		if (tmp == 0 ) {
			if (q.empty())printf("%d\n", 0);
			else { printf("%d\n",q.top() * (-1) ); q.pop(); }
		}
		else q.push(tmp * (-1));
	}
	
}
