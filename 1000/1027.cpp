#include<iostream>
#include<algorithm>
using namespace std;
struct Point
{
	long long x;
	long long y;
};
int n;
Point P[51];
long long ccw(Point p1, Point p2, Point p3)
{
	return (p1.x * p2.y + p2.x * p3.y + p3.x * p1.y) - (p1.y * p2.x + p2.y * p3.x + p3.y * p1.x);

}
int find_left(int idx)
{

	int ret = 0;
	for (int i = 1; i<idx; ++i) {
		bool flag = true;
		
		for (int j = i + 1; j < idx; ++j) {
			if (ccw(P[idx], P[i], P[j]) <= 0) {
				flag = false;
			}
		}
		if (flag) {

			++ret;
		}
		

		

	}
	//cout<<"left:" << ret << endl;
	return ret;
}
int find_right(int idx)
{
	int ret = 0;
	for (int i = idx + 1; i <= n; ++i) {
		bool flag = true;
		
		for (int j = i - 1; j >idx; --j) {

			if (ccw(P[idx], P[i], P[j]) >= 0) {
				flag = false;

			}
		}
		if (flag)++ret;
		


	}
	//cout << "right:" << ret << endl;
	return ret;
}
int main()
{
	cin >> n;
	P[0].x = 0, P[0].y = 2000000000;
	for (int i = 1; i <= n; ++i)P[i].x = i;
	for (int i = 1; i <= n; ++i)scanf("%lld", &P[i].y);
	long long max_val = 0;
	max_val = max(find_right(1), find_left(n));

	for (int i = 2; i <= n - 1; ++i) {
		long long ret = 0;
		ret = find_left(i) + find_right(i);
		max_val = max(max_val, ret);

	}

	cout << max_val << endl;
}
