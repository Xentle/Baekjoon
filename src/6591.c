#include <stdio.h>

int main() {
	int n, k, ans, temp;
	while(1) {
		scanf("%d %d", &n, &k);
		getchar();
		if(k>n/2)
			k = n-k;
		if(n == 0 && k == 0)
			break;
		if(k == 0)
			printf("1\n");
		else if(k == 1)
			printf("%d\n", n);
		else {
			ans = n;
			for(int j=2, m=n-1; j<=k; j++, m--) {
				temp = m;
				if(ans % j == 0) {
					ans /= j;
					ans *= temp;
				}
				else if(temp % j == 0) {
					temp /= j;
					ans *= temp;
				}
				else {
					for(int l=j; l>1; ) {
						for(int p=2; 1; p++) {
							if(l % p == 0) {
								l /= p;
								if(ans % p == 0) {
									ans /= p;
									break;
								}
								else {
									temp /= p;
									break;
								}
							}
						}
					}
					ans *= temp;
				}
			}
			printf("%d\n", ans);
		}
	}
	return 0;
}