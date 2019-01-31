#include <iostream>
#pragma warning (disable: 4996)
using namespace std;

int main() {
	char c;
	int cnt = 0, flag = 0;
	while (EOF != scanf("%c", &c)) {
		if (c == ' ' || c == '\n')
			flag = 0;
		else if (flag == 0) {
			cnt++;
			flag = 1;
		}
	}

	cout << cnt;
}
