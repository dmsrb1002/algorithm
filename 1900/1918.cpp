#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{
	string str; cin >> str;
	int num = 0;
	stack<char> s;
	for (int i = 0; i < str.size(); ++i) {
		if (str[i] == '(')s.push(str[i]);
		else if (str[i] == ')') {
			while (s.top()!='(') {
				cout << s.top(); s.pop();
			}
			s.pop();
		}
		else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {
			while (1) {
				if (s.empty() || s.top() == '(' || ((s.top() == '-' || s.top() == '+') && (str[i] == '*' || str[i] == '/'))) {
					s.push(str[i]);
					break;
				}
				else {
					cout << s.top(); s.pop();
				}
			}
		}
		else {
			cout << str[i];
		}
	}
	while (!s.empty()) {
		cout << s.top(); s.pop();
	}
}
