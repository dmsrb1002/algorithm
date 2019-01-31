#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	double a,b,c;
	double k;
	cin >> c >> a >> b;
	k = sqrt(c*c / (a*a + b*b));
	cout << (int)(a*k) << " " << (int)(b*k) << endl;
	return 0;
}
