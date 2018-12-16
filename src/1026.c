#include <stdio.h>

int main() {
	int n, a[51], b[51], temp, ans=0;
	scanf("%d", &n);
	for(int i=1; i<=n; i++) {
		scanf("%d", &a[i]);
		getchar();
	}
	for(int i=1; i<=n; i++) {
		scanf("%d", &b[i]);
		getchar();
	}
	for(int e=n; e>1; e--) {
		for(int s=1; s<e; s++) {
			if(a[s] > a[s+1]) {
				temp = a[s+1];
				a[s+1] = a[s];
				a[s] = temp;
			}
			if(b[s] < b[s+1]) {
				temp = b[s+1];
				b[s+1] = b[s];
				b[s] = temp;
			}
		}
	}
	for(int i=1; i<=n; i++)
		ans += (a[i] * b[i]);
	printf("%d\n", ans);
	return 0;
}