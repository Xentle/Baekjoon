#include <stdio.h>

int n, wine[10001], m[10001][7];
int max(int a1, int a2);

int main() {
	scanf("%d", &n);
	getchar();
	int ans=-1;
	for(int i=1; i<=n; i++) {
		scanf("%d", &wine[i]);
		getchar();
	}
	if(n == 1)
		printf("%d", wine[1]);
	else if(n == 2)
		printf("%d", wine[1]+wine[2]);
	else {
		m[3][0] = wine[2]+wine[3];
		m[3][1] = wine[1]+wine[3];
		m[3][2] = wine[3];
		m[3][3] = wine[1]+wine[2];
		m[3][4] = wine[2];
		m[3][5] = wine[1];
		m[3][6] = 0;
		for(int i=4; i<=n; i++) {
			m[i][0] = max(m[i-1][1], m[i-1][2]) + wine[i];
			m[i][1] = max(m[i-1][3], m[i-1][4]) + wine[i];
			m[i][2] = max(m[i-1][5], m[i-1][6]) + wine[i];
			m[i][3] = m[i-1][0];
			m[i][4] = max(m[i-1][1], m[i-1][2]);
			m[i][5] = max(m[i-1][3], m[i-1][4]);
			m[i][6] = max(m[i-1][5], m[i-1][6]);
		}
		for(int i=0; i<=6; i++)
			if(m[n][i] > ans)
				ans = m[n][i];
		printf("%d\n", ans);
	}
	return 0;
}

int max(int a1, int a2) {
	if(a1 > a2)
		return a1;
	else
		return a2;
	return 0;
}