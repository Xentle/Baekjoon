#include <stdio.h>

int main() {
	int num[100], size, ans[100];
	long long int sum=0;
	scanf("%d", &size);
	getchar();
	for(int i=0; i<size; i++) {
		scanf("%d", &num[i]);
		getchar();
	}
	ans[0] = num[0];
	sum = ans[0];
	printf("%d", ans[0]);
	for(int i=1; i<size; i++) {
		ans[i] = num[i]*(i+1) - sum;
		sum = num[i]*(i+1);
	}
	for(int i=1; i<size; i++) {
		printf(" %d", ans[i]);
	}
	printf("\n");
	return 0;
}