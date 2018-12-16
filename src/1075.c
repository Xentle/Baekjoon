#include <stdio.h>

int main() {
	long long int N;
	int F, ans;
	scanf("%lld", &N);
	getchar();
	scanf("%d", &F);
	getchar();
	N -= (N % 100);
	for(int i=0; i<100; i++) {
		if((N + i) % F == 0) {
			N += i;
			break;
		}
	}
	ans = N % 100;
	if(ans < 10)
		printf("0%d\n", ans);
	else
		printf("%d\n", ans);
	return 0;
}