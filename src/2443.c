#include <stdio.h>
// 별 찍기 - 6

int main() {
	int n;
	scanf("%d", &n);
	for(int i=1; i<=2*n-1; i++)
		printf("*");
	printf("\n");
	for(int i=1; i<n; i++) {
		for(int j=1; j<=i; j++)
			printf(" ");
		for(int j=1; j<=(n-i)*2-1; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}