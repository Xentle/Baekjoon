#include <stdio.h>

void fibonacci(int n);

int main() {
	int T, N, f1[2]={1,0}, f2[2]={0,1}, temp[2];
	scanf("%d", &T);
	getchar();
	for(int i=0; i<T; i++, f1[0]=1, f1[1]=0, f2[0]=0, f2[1]=1) {
		scanf("%d", &N);
		getchar();
		if(N == 0)
			printf("1 0\n");
		else if(N == 1)
			printf("0 1\n");
		else {
			for(int i=2; i<=N; i++) {
				temp[0] = f2[0];
				temp[1] = f2[1];
				f2[0] += f1[0];
				f2[1] += f1[1];
				f1[0] = temp[0];
				f1[1] = temp[1];
			}
			printf("%d %d\n", f2[0], f2[1]);
		}
	}
	return 0;
}