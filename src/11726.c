#include <stdio.h>

int dp(int n);
int m[1001];

int main() {
	int n, ans=0;
	for(int i=0; i<=1000; i++)
		m[i] = -1;
	m[1] = 1;
	m[2] = 2;
	scanf("%d", &n);
	ans = dp(n);
	printf("%d\n", ans);
	return 0;
}

int dp(int n) {
	if(m[n] != -1)
		return m[n];
	else
		return m[n] = (dp(n-1) + dp(n-2)) % 10007;
}