#include <cstdio>

int main() {
	long long test, j = 3, k = 6;
	long long x, y;
	long long cnt = 4;
	long long len = 0;
	scanf("%lld", &test);
	for (int i = 1; i <= test; i++) {
		scanf("%lld%lld", &x, &y);
		len = y - x;
		if (len == 1)printf("1\n");
		else if (len == 2)printf("2\n");
		else {
			while (1) {
				if (len - k <= 0)break;
				k += j * 2;
				j++;
				cnt += 2;
			}
			if (len <= k - (cnt / 2))printf("%lld\n", cnt - 1);
			else printf("%lld\n", cnt);
		}
		k = 6;
		j = 3;
		cnt = 4;
	}
	return 0;
}
