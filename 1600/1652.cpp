#include<iostream>
#include<algorithm>

using namespace std;

#pragma warning(disable:4996)

char arr[100][100];
int main() {
	int n;
	cin >> n;
	char temp;
	scanf("%c", &temp);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			scanf("%c", &arr[i][j]);
		}
		scanf("%c", &temp);
	}
	int count = 0;
	int tot = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (arr[i][j] == '.') {
				++count;
			}
			else {
				count = 0;
			}
			if (count == 2) { ++tot; }
		}
		
		count = 0;
	}
	cout << tot << " ";
	tot = 0; count = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (arr[j][i] == '.') {
				++count;
			}
			else {
				count = 0;
			}
			if (count == 2) { ++tot;  }
		}

		count = 0;
	}
	cout << tot << endl;
	return 0;

}
