#include <stdio.h>

int main() {
	char c;
	int a, b;
	while(1) {
		if((c = getchar()) == EOF)
			break;
		getchar();
		a = c - '0';
		if((c = getchar()) == EOF)
			break;
		getchar();
		b = c - '0';
		printf("%d\n", a+b);
	}
	return 0;
}