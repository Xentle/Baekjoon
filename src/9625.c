#include <stdio.h>

int main() {
	int n, ans[46][2];
	scanf("%d", &n);
	ans[1][0] = 0;
	ans[1][1] = 1;
	ans[2][0] = 1;
	ans[2][1] = 1;
	for(int i=3; i<=n; i++) {
		ans[i][0] = ans[i-1][0] + ans[i-2][0];
		ans[i][1] = ans[i-1][1] + ans[i-2][1];
	}
	printf("%d %d\n", ans[n][0], ans[n][1]);
	return 0;
}
/*

printf(n-1) printf(n-2)
A
B
BA
BAB
BABBA
BABBABAB
BABBABABBABBA
*/