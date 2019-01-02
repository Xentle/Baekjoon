#include <stdio.h>

int main() {
	int a, b, c, d1, d2;
	scanf("%d %d %d", &a, &b, &c);
	d1 = b-a;
	d2 = c-b;
	if(d2 > d1)
		printf("%d\n", d2-1);
	else
		printf("%d\n", d1-1);
	return 0;
}