#include<stdio.h>  
#include<string.h>  
#define min(a,b) (a>b?b:a)  
int d[16][1 << 16];
int map[16][16];
int n, p;

int find(int cnt, int on);

int main() {
	int on = 0, ocnt = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &map[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		char t;
		scanf("\n%c", &t);
		if (t == 'Y')
			on |= 1 << i, ocnt++;
	}
	scanf( "%d", &p);
	memset(d, -1, sizeof(d));
	int ans = find(ocnt, on);
	printf("%d", ans == 1000000000 ? -1 : ans);
	return 0;
}
int find(int cnt, int on) {
	if (cnt >= p) return 0;

	if (d[cnt][on] >= 0) return d[cnt][on];
	d[cnt][on] = 1000000000;
	for (int i = 0; i < n; i++) {
		if (on & 1 << i) { // i가 켜져있음  
			for (int j = 0; j < n; j++) {
				if (i == j || on & (1 << j)) continue; // j가 켜저있음  
													   //printf("i = %d, j = %d, cnt =\t%d, on =\t%d, d[cnt][on] =\t%d\n", i, j, cnt, on, d[cnt][on]);  
				d[cnt][on] = min(d[cnt][on], find(cnt + 1, on | 1 << j) + map[i][j]);
			}
		}
	}

	return d[cnt][on];
}
