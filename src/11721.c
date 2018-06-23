#include <stdio.h>

int main() {
	int n=0;
	char c=0;
	while(1) {
		c=getchar();
		if(c=='\n')
			break;
		putchar(c);
		n++;
		if(n==10) {
			putchar('\n');
			n=0;
		}
		
	}
	putchar('\n');
	return 0;
}