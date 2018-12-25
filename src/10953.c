#include <stdio.h>

int main() {
	int t, a, b;
	scanf("%d", &t);
	for(int i=0; i<t; i++) {
		scanf("%d,%d", &a, &b);
		getchar();
		printf("%d\n", a+b);
	}
	return 0;
}