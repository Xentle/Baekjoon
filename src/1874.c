#include <stdio.h>

int main() {
	int n, arr[100000], max_i, check=1, ans[100000]={0};
	scanf("%d", &n);
	getchar();
	for(int i=0; i<n; i++) {
		scanf("%d", &arr[i]);
		getchar();
	}
	for(max_i=0; arr[max_i]<n; max_i++) {
		if(arr[max_i+1]<arr[max_i]-1) {
			for(int i=arr[max_i]-1; i>arr[max_i+1]; i--)
				if(ans[i]!=1) {
					check=0;
					break;
				}
		}
		ans[arr[max_i]]=1;
	}
	for(int i=max_i+1; i<n-1; i++)
		if(arr[i+1]>arr[i]) {
			check=0;
			break;
		}
	if(check==1) {
		int s=1;
		for(int i=0; i<=max_i; i++) {
			for(; s<=arr[i]; s++)
				printf("+\n");
			printf("-\n");
		}
		for(int i=max_i+1; i<n; i++)
			printf("-\n");
	}
	else
		printf("NO\n");
	return 0;
}