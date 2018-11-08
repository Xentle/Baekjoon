#include <stdio.h>

int m[1001], arr[1001], n, ans;

int main() {
	scanf("%d", &n);
	for(int i=1; i<=n; i++) {
		scanf("%d", &arr[i]);
		getchar();
	}
	for(int i=1; i<=n; i++)
		m[i] = 1;
	for(int i=n; i>=1; i--) {
		for(int j=i+1; j<=n; j++) {
			if(arr[j] > arr[i]) {
				if(m[j] + 1 > m[i]) {
					m[i] = m[j] + 1;
				}
			}
		}
	}
	ans = m[1];
	for(int i=1; i<=n; i++)
		if(m[i] > ans)
			ans = m[i];
	printf("%d\n", ans);
	return 0;
}