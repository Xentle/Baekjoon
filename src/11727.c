#include <stdio.h>

int m[1001], n, ans; 

int main() {
	scanf("%d", &n);
	for(int i=0; i<=1000; i++)
		m[i] = -1;
	m[0] = 1;
	m[1] = 1;
	m[2] = 3;
	ans = dp(n);
	printf("%d\n", ans);
	return 0;
}

int dp(int i) {
	if(m[i] != -1)
		return m[i];
	else {
		return m[i] = (dp(i-1) + 2 * dp(i-2)) % 10007;
	}
}