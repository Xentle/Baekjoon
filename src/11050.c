#include <stdio.h>

int main() {
	int n, k, ans=1;
	scanf("%d %d", &n, &k);
	for(int i=n; i>n-k; i--)
		ans *= i;
	for(int i=1; i<=k; i++)
		ans = ans/i;
	printf("%d\n", ans);
	return 0;
}