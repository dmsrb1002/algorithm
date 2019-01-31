#include<algorithm>
#include<iostream>
#include<string.h>
int A[51];
int dp[51][250001];
int N;
#define MAX_VAL 500000
#define FAIL 987654321
using namespace std;
int same_tower(int idx,int diff)
{
	if (diff > MAX_VAL / 2)return -FAIL;	//최댓값의 범위 초과
	if (idx > N)	//주어진 조각을 모두 사용한 후
	{
		if (diff== 0)
		{
			//탑쌓기에 모두 실패할 때(왼쪽,오른쪽 높이가 모두 0)
			return 0;
		}
		else {
			return -FAIL;
	
		}
	}
	int& ret = dp[idx][diff];
	if (ret != -1)return dp[idx][diff];
	ret = -FAIL;
	ret = same_tower(idx + 1, diff);	//버릴때
	ret = max(ret, same_tower(idx + 1, diff + A[idx]));	//높은곳에 쌓을 때
	if (A[idx] > diff)
	{
		ret = max(ret, diff + same_tower(idx + 1, A[idx] - diff));	//낮은곳에 쌓을때 1
	}
	else
	{
		ret = max(ret, A[idx] + same_tower(idx + 1, diff - A[idx]));	//낮은곳에 쌓을 때 2
	}
	return ret;
}
int main() 
{
	cin >> N;
	ios::sync_with_stdio(false);
	for (int i = 1; i <= N; ++i)cin >> A[i];
	memset(dp, -1, sizeof(dp));
	int ans = same_tower(1, 0);
	ans == 0 ? cout << -1 << endl : cout << ans << endl;
	
}
