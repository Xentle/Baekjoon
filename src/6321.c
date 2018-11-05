#include <stdio.h>

int main() {
	int n;
	char c, name[60];
	scanf("%d", &n);
	getchar();
	for(int i=1; i<=n; i++) {
		for(int i=0; i<51; i++) {
			c = getchar();
			if(c == '\n') {
				name[i] = 0;
				break;
			}
			if(c == 'Z')
				name[i] = 'A';
			else
				name[i] = c + 1;
		}
		printf("String #%d\n", i);
		printf("%s\n\n", name);
	}
	return 0;
}