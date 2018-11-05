#include <stdio.h>

int main() {
	int T, ans, N;
	scanf("%d", &T);
	getchar();
	for(int i=0; i<T; i++) {
		ans = 0;
		scanf("%d", &N);
		getchar();
		for(int k=5; k<=N; k*=5) {
			ans += (N/k);
		}
		printf("%d\n", ans);
	}
	return 0;
}