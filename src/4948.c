#include <stdio.h>

int main() {
	int n, arr[246913]={0}, count;
	arr[1]=1;
	while(1) {
		count=0;
		scanf("%d", &n);
		getchar();
		if(n==0)
			break;
		for(int i=2; i<=2*n; i++) {
			if(arr[i]==0)
				for(int j=2; i*j<=2*n; j++)
					arr[i*j]=1;
		}
		for(int i=n+1; i<=2*n; i++)
			if(arr[i]==0)
				count++;
		printf("%d\n", count);
	}
	return 0;
}