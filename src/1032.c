#include <stdio.h>

int main() {
	int n, check;
	char name[50][60];
	char c;
	scanf("%d", &n);
	getchar();
	for(int i=0; i<n; i++) {
		scanf("%s", name[i]);
		getchar();
	}
	for(int i=0; name[0][i] != 0; i++) {
		check=1;
		c = name[0][i];
		for(int j=0; j<n; j++) {
			if(name[j][i] != c) {
				check = 0;
				break;
			}
		}
		if(check == 1)
			printf("%c", c);
		else
			printf("?");
	}
	return 0;
}