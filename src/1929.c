#include <stdio.h>

int main() {
	int M, N, arr[1000001];
	scanf("%d %d", &M, &N);
	getchar();
	for(int i=0; i<=N; i++)
		arr[i]=0;
	arr[1]=1;
	for(int i=2; i<=N; i++) {
		if(arr[i]==0)
		for(int j=2; i*j<=N; j++) {
			arr[i*j]=1;
		}
	}
	for(int i=M; i<=N; i++)
		if(arr[i]==0)
			printf("%d\n", i);
	return 0;
}