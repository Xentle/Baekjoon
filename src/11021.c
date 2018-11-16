#include <stdio.h>

int main() {
	int n, a, b;
	scanf("%d", &n);
	getchar();
	for(int i=1; i<=n; i++) {
		scanf("%d %d", &a, &b);
		getchar();
		printf("Case #%d: %d\n", i, a+b);
	}
	return 0;
}