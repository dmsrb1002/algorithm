#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
char arr[17];
bool visited[17];
void rec(int C, vector<char>& picked, int L,int idx)
{
	if (L == 0) {
		int a =0, b=0;
		for (int i = 1; i < picked.size(); ++i) {
			if (picked[i] == 'a' || picked[i] == 'e' || picked[i] == 'i' || picked[i] == 'o' || picked[i] == 'u') {
				++a;
			}
			else {
				++b;
			}
		}
		if (a >= 1 && b >= 2) {
			for (int i = 1; i < picked.size(); ++i) {
				printf("%c", picked[i]);
			}printf("\n"); return;
		}
	}
	
	for (int i = idx; i < C; ++i) {
		
		if (visited[i])continue;
		if (picked.back() > arr[i])continue;
		visited[i] = true;
		picked.push_back(arr[i]);
		rec(C, picked, L - 1,idx + 1);
		visited[i] = false;
		picked.pop_back();
	}


}
int main()
{
	int L, C;

	cin >> L >> C;
	for (int i = 0; i < C; ++i) {
		cin >> arr[i];
	}
	sort(arr, arr + C);
	vector<char> v;
	v.resize(1);
	rec(C, v, L ,0);
	
}
