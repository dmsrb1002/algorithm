#include<iostream>
#pragma warning (disable:4996)
using namespace std;
#include<algorithm>


struct Time
{
	int first, second;

};
bool Com(Time a, Time b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	return a.second < b.second;
}
int main() {
	int n;
	cin >> n;
	Time time[100000];
	for (int i = 0; i < n; ++i) {
		scanf("%d %d", &time[i].first, &time[i].second);
	}
	sort(time, time + n, Com);
	int end = time[0].second;
	int count = 1;
	for (int i = 1; i < n; ++i) {
		if (time[i].first >= end) {
			end = time[i].second;
			++count;
			
		}
		
	}
	
	cout << count << endl;
	return 0;
}
