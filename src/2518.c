#include <stdio.h>

int main() {
	int M, N, n=0, sum=0, min=0;
	scanf("%d", &M);
	getchar();
	scanf("%d", &N);
	getchar();
	for(int i=M; i<=N; i++) {
		if(i==2) {
			sum+=i;
			min=i;
			n++;
		}
		else {
			for(int j=2; j<=i; j++) {
				if(j==i) {
					sum+=i;
					n++;
					if(min==0)
						min=i;
				}
				if(i%j==0)
					break;
			}
		}
	}
	if(n==0)
		printf("-1\n");
	else {
		printf("%d\n", sum);
		printf("%d\n", min);
	}
	return 0;
}