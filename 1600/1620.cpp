#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
pair<string,int> arr_str[100001];
pair<int, string> arr_val[100001];
int n, m;
int bsearch1(int start,int end,string key)
{
	
	while (start <= end) {
		int mid = (start + end) / 2;
		if (arr_str[mid].first == key)return arr_str[mid].second;
		if (arr_str[mid].first > key)end = mid - 1;
		else start = mid + 1;
	}
	
	
}
string bsearch2(int start, int end, int key)
{
	
	while (start <= end) {
		int mid = (start + end) / 2;
		if (arr_val[mid].first == key)return arr_val[mid].second;
		if (arr_val[mid].first > key)end = mid - 1;
		else start = mid + 1;
	}
	
}
int main() {
	char str[21];
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		
		scanf("%s", &str);
		string s(str);
		arr_str[i].first = s;
		arr_str[i].second = i;

		arr_val[i].second = arr_str[i].first;		
		arr_val[i].first = i;

	}
	sort(arr_str + 1, arr_str + n + 1);
	sort(arr_val + 1, arr_val + n + 1);
	for (int i = 0; i < m; ++i) {
		scanf("%s", &str);
		string tmp(str);
		if (tmp.at(0) >= 'A')printf("%d\n",bsearch1(1, n, tmp));
		else { cout << bsearch2(1, n, stoi(tmp)); printf("\n"); }
		
	}
}
