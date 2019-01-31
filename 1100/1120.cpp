#include<iostream>
#include<cstring>
using namespace std;

int main() {
	char ch1[51];
	char ch2[51];
	cin >> ch1 >> ch2;
	int str1;
	str1 = strlen(ch1);
	int str2;
	str2 = strlen(ch2);
	int count = 0;
	int min=str1;

	for (int j = 0; j < str2 - str1 + 1; ++j) {
		for (int i = 0; i < str1; ++i) {
			if (ch1[i] != ch2[i+j]) { ++count; }

		}
		if (min > count) {
			min = count;
			
		}

		count = 0;


	}
	cout << min << endl;
	return 0;
}
