#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(a>=b && b>=c)
		printf("%d\n", b);
	else if(a>=b && c>=a)
		printf("%d\n", a);
	else if(a>=c && c>=b)
		printf("%d\n", c);
	else if(a>=c && b>=a)
		printf("%d\n", a);
	else if(b>=c && c>=a)
		printf("%d\n", c);
	else
		printf("%d\n", b);
	return 0;
}