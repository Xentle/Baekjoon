#include <stdio.h>

int main() {
	int num[1001], n, k, check=0, ans;
	scanf("%d %d", &n, &k);
	for(int i=1; i<=n; i++)
		num[i] = 1;
	for(int i=2; i<=n; i++) {
		if(num[i] == 1) {
			for(int j=i; j<=n; j += i) {
				if(num[j] != 0) {
					num[j] = 0;
					check++;
				}
				if(check == k) {
					ans = j;
					break;
				}
			}
			if(check == k)
				break;
		}
	}
	printf("%d\n", ans);
	return 0;
}