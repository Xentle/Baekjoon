#include <stdio.h>

int main() {
	int n, ans=0;
	scanf("%d", &n);
	getchar();
	for(int i=5; i<=n; i*=5)
		ans += n/i;
	printf("%d\n", ans);
	return 0;
}