#include <stdio.h>

int main() {
	int n, l=0;
	char c;
	scanf("%d\n", &n);
	for(int i=0; i<n; i++) {
		scanf("%d ", &l);
		while(1) {
			c=getchar();
			if(c=='\n') {
				printf("\n");
				break;
			}
			for(int i=0; i<l; i++)
				printf("%c", c);
		}
		
	}
	return 0;
}