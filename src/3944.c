#include <stdio.h>

int main() {
	char c;
	int r, sum, b;
	scanf("%d", &r);
	for(int z=0; z<r; z++) {
		scanf("%d", &b);
		getchar();
		sum = 0;
		while((c = getchar()) != '\n')
			sum = sum + c - '0';
		printf("%d\n", sum % (b-1));
	}
	return 0;
}