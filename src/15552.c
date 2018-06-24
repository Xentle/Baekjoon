#include <stdio.h>

int main() {
	int n;
	int a, b;
	scanf("%d", &n);
	getchar();
	for(int i=0; i<n; i++) {
		scanf("%d %d", &a, &b);
		getchar();
		printf("%d\n", a+b);
	}
	return 0;
}