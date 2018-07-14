#include <stdio.h>

int main() {
	int T, arr[10001]={0}, n, p;
	scanf("%d", &T);
	getchar();
	arr[1]=1;
	for(int i=0; i<T; i++) {
		scanf("%d", &n);
		getchar();
		for(int i=2; i<=n; i++) {
			if(arr[i]==0)
				for(int j=2; i*j<=n; j++)
					arr[i*j]=1;
		}
		for(int i=2; i<=n/2; i++) {
			if(arr[i]==0 && arr[n-i]==0)
				p=i;
		}
		printf("%d %d\n", p, n-p);
	}
	return 0;
}