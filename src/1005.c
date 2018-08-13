#include <stdio.h>

int cost[1001], rule[1001][1001], m[1001], n;

int main() {
	int t, k, ans, target, start[1001];
	scanf("%d", &t);
	getchar();
	while(t-- > 0) {
		for(int i=0; i<1001; i++)
			m[i] = -1;
		for(int i=0; i<1001; i++)
			for(int j=0; j<1001; j++)
				rule[i][j] = 0;
		for(int i=0; i<1001; i++)
			start[i] = 1;
		scanf("%d %d", &n, &k);
		getchar();
		for(int i=1; i<=n; i++) {
			scanf("%d", &cost[i]);
			getchar();
		}
		for(int i=1, b1, b2; i<=k; i++) {
			scanf("%d %d", &b1, &b2);
			getchar();
			rule[b1][b2]=1;
			start[b2] = 0;
		}
		scanf("%d", &target);
		getchar();
		for(int i=1; i<=n; i++)
			if(start[i] == 1)
				m[i] = cost[i];
		ans = dp(target);
		printf("%d\n", ans);
	}
	return 0;
}

int dp(int index) {
	int max = -1;
	if(m[index] != -1)
		return m[index];
	else {
		for(int i=1; i<=n; i++) {
			if(rule[i][index] == 1)
				if(dp(i) >= max)
					max = dp(i);
		}
		return m[index] = max + cost[index];
	}
}