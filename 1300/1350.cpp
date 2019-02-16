#include<iostream>
#pragma warning(disable:4996)
using namespace std;

int arr[1000];
int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		scanf("%d", &arr[i]);
	}
	int cluster;long long int count = 0;  
    //FileMax의 size가 10억이며, cluster의 min값은 1이 될수 있으므로
    //count는 overflow가 발생할 수 있다. 즉, count의 max값은 10억x1000
    //따라서 long long의 data type이용.
	cin >> cluster;
	for (int i = 0; i < N; ++i) {
		if (arr[i] <= cluster && arr[i]!=0) {
            //arr[i]!=0인 이유는 파일의 크기가 0이면 필요한 cluster도 0개 이므로
            //조건을 추가해준다.
			++count;
		}
		else {
			if (arr[i] % cluster == 0) {
				count += arr[i] / cluster;
                //arr[i]가 cluster로 나누어 떨어질때와 아닐때의 count값이 다르므로
                //if조건문을 사용하여 case를 나눠준다.
			}
			else {
				count += arr[i] / cluster + 1;
			}
		}
	}
	cout << count*cluster << endl;

	return 0;
}
