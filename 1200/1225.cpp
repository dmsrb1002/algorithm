#include<iostream>
using namespace std;

int main() {
	char temp;
	long long int a,tot1=0;
	
	while (1) {
		temp = getchar();
		if (temp == ' ') {
			break;
		}
		else {
			a = temp - '0';
			tot1 += a;
		}
	}
	long long int tot2 = 0;
	while (1) {
		temp = getchar();
		if (temp == '\n'||temp==EOF) {
			break;
		}
		else {
			a = temp - '0';
			tot2 += a;
		}
	}
	cout << tot1*tot2 << endl;
	return 0;
}
