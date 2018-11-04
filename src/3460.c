#include <stdio.h>

int main() {
	int rep, tc, pos[100], n;
	scanf("%d", &rep);
	getchar();
	for(int i=0; i<rep; i++) {
		n=0;
		scanf("%d", &tc);
		getchar();
		if(tc == 1)
			printf("0\n");
		else {
			while(tc > 0) {
				pos[n++] = tc % 2;
				tc /= 2;
			}
			n--;
			for(int j=0; j<n; j++)
				if(pos[j] == 1)
					printf("%d ", j);
			printf("%d\n", n);
		}
	}
	return 0;
}