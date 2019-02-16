#include<iostream>
#include<string>
using namespace std;

char tmp[62];
struct Student
{
	string name;
	char type;
	bool ring = true;
};

int main()
{
	int senario = 1;
	while (1) {
		int n; cin >> n; getchar();
		if (n == 0)break;
		Student arr[101];
		for (int i = 1; i <= n; ++i) {
			cin.getline(tmp, 62);
			string s(tmp); arr[i].name = s;
		}
		for (int i = 0; i < 2 * n - 1; ++i) {
			int num; char t; scanf("%d %c", &num, &t);
			arr[num].ring = !arr[num].ring;
			arr[num].type = t;
		}
		for (int i = 1; i <= n; ++i) {
			if (!arr[i].ring) {
				printf("%d ", senario++);
				cout << arr[i].name; printf("\n"); break;
			}
		}
	}
}
