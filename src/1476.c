#include <stdio.h>

int main() {
	int e, s, m;
	scanf("%d %d %d", &e, &s, &m);
	getchar();
	if(e == 1 && s == 1 && m == 1)
		printf("1\n");
	else {
		int i=1;
		while(1) {
			if((i-e) % 15 == 0 && (i-s) % 28 == 0 && (i-m) % 19 == 0) {
				printf("%d\n", i);
				break;
			}
			i++;
		}	
	}
	return 0;
}