#include <stdio.h>

int n, k, c[11], ans=0;

int main() {
	scanf("%d %d", &n, &k);
	getchar();
	for(int i=1; i<=n; i++) {
		scanf("%d", &c[i]);
		getchar();
	}
	for(int i=n; i>=0; i--) {
		while(c[i] <= k) {
			k -= c[i];
			ans++;
		}
		if(k == 0)
			break;
	}
	printf("%d\n", ans);
	return 0;
}