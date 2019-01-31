#include <iostream>
#pragma warning (disable: 4996)
using namespace std;

int main() {
	char ch;
	int arr[26] = { 0, };
	while (1) {
		ch = getchar();
		if (ch == '\n' || ch == EOF) {
			break;
		}
		else {
			if (ch < 97) {
				ch = ch + ' ';
			}
			++arr[ch - 'a'];
		}
	}
	int max = 0;
	int count = 0;
	int index = 0;
	for (int i = 0; i < 26; ++i) {
		if (max < arr[i]) {
			max = arr[i];
			index = i;
		}
	}
	for (int i = 0; i < 26; ++i) {
		if (max == arr[i]) {
			++count;
		}
	}
	if (count >= 2) {
		cout << "?" << endl;
	}
	else {
		printf("%c\n", index + 'a' - ' ');
	}

	return 0;
}
