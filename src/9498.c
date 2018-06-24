#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	if(n>=90 && n<=100)
		printf("A\n");
	else if(n<=89 && n>=80)
		printf("B\n");
	else if(n<=79 && n>=70)
		printf("C\n");
	else if(n<=69 && n>=60)
		printf("D\n");
	else
		printf("F\n");
	return 0;
}