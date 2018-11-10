#include <stdio.h>

int main() {
	int n, p[1001], temp, ans=0;
	scanf("%d", &n);
	getchar();
	for(int i=1; i<=n; i++) {
		scanf("%d", &p[i]);
		getchar();
	}
	for(int i=n; i>=2; i--) {
		for(int j=1; j<i; j++) {
			if(p[j] > p[j+1]) {
				temp = p[j+1];
				p[j+1] = p[j];
				p[j] = temp;
			}
		}
	}
	for(int i=1; i<=n; i++) {
		temp = p[i] * (n +1 - i);
		ans += temp;
	}
	printf("%d\n", ans);
	return 0;
}