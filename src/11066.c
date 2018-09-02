#include <stdio.h>

int size[501], c[501][501], sum[501][501], n;
int dp(int s, int e);
int sum_f(int s, int e);

int main() {
	int T, ans;
	scanf("%d", &T);
	getchar();
	for(int i=0; i<T; i++) {
		scanf("%d", &n);
		getchar();
		for(int i=0; i<501; i++)
			for(int j=0; j<501; j++) {
				c[i][j] = -1;
				sum[i][j] = -1;
			}
		for(int i=1; i<=n; i++) {
			scanf("%d", &size[i]);
			getchar();
		}
		for(int i=1; i<=n; i++)
			c[i][i] = 0;
		for(int i=1; i<n; i++) {
			c[i][i+1] = sum[i][i+1] = size[i] + size[i+1];
			sum[i][i] = size[i];
		}
		sum[n][n] = size[n];
		ans = dp(1, n);
		printf("%d\n", ans);
	}
	return 0;
}

int dp(int s, int e) {
	int ret, temp;
	if(c[s][e] != -1)
		return c[s][e];
	else {
		ret = dp(s, s) + dp(s+1, e) + sum_f(s, s) + sum_f(s+1, e);
		for(int i=s+1; i<e; i++) {
			temp = dp(s, i) + dp(i+1, e) + sum_f(s, i) + sum_f(i+1, e);
			if(temp < ret)
				ret = temp;
		}
		return c[s][e] = ret;
	}
}

int sum_f(int s, int e) {
	int ret=0;
	if(sum[s][e] != -1)
		return sum[s][e];
	else {
		for(int i=s; i<=e; i++)
			ret += size[i];
		return sum[s][e] = ret;
	}
}