#include <stdio.h>

int dp[301][301];
int countMin(int x, int y);

int main() {
	int n, m, t, ans;
	scanf("%d %d", &n, &m);
	if(n > m) {
		t = m;
		m = n;
		n = t;
	}
	for(int i=1; i<=300; i++)
		for(int j=1; j<=300; j++)
			dp[i][j] = -1;
	for(int i=1; i<=m; i++)
		dp[1][i] = i-1;
	ans = countMin(n, m);
	printf("%d\n", ans);
	return 0;
}

int countMin(int x, int y) {
	int a, b, min=1000000000, t;
	if(x < y) {
		a = x;
		b = y;
	}
	else {
		a = y;
		b = x;
	}
	if(dp[a][b] != -1)
		return dp[a][b];
	for(int i=1; i<a; i++) {
		t = countMin(i, b) + countMin(a-i, b) + 1;
		if(t < min)
			min = t;
	}
	for(int i=1; i<b; i++) {
		t = countMin(a, i) + countMin(a, b-i) + 1;
		if(t < min)
			min = t;
	}
	return dp[a][b] = min;
}