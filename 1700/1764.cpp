#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int m;
	cin >> m;
	vector<string> v;
	v.resize(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	
	string tmp;
	vector<string> ans;
	for (int i = 0; i < m; ++i) {
		cin >> tmp;
		if (binary_search(v.begin(), v.end(), tmp)) {
			ans.push_back(tmp);
		}
	}
	sort(ans.begin(), ans.end());
	cout << ans.size() << endl;
	for (size_t i = 0; i < ans.size(); ++i) {
		cout << ans[i] << endl;
	}
}
