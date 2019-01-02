#include <stdio.h>

int main() {
	int n, plug[500000], ans=1;
	scanf("%d", &n);
	getchar();
	for(int i=0; i<n; i++) {
		scanf("%d", &plug[i]);
		getchar();
	}
	ans -= n;
	for(int i=0; i<n; i++)
		ans += plug[i];
	printf("%d\n", ans);
	return 0;
}