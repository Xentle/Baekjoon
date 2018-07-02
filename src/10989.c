#include <stdio.h>

int main() {
	int n[10001], N, temp;
	scanf("%d", &N);
	getchar();
	for(int i=0; i<10001; i++)
		n[i]=0;
	for(int i=0; i<N; i++) {
		scanf("%d", &temp);
		getchar();
		n[temp]++;
	}
	for(int i=0; i<10001; i++) {
		if(n[i]>0) {
			for(int j=n[i]; j>0; j--)
				printf("%d\n", i);
		}
	}
	return 0;
}