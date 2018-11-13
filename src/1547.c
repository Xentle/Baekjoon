#include <stdio.h>

int main() {
	int n, a, b, cup[4], temp;
	cup[1] = 1;
	cup[2] = 2;
	cup[3] = 3;
	scanf("%d", &n);
	getchar();
	for(int i=0; i<n; i++) {
		scanf("%d %d", &a, &b);
		getchar();
		temp = cup[b];
		cup[b] = cup[a];
		cup[a] = temp;
	}
	for(int i=1; i<=3; i++) {
		if(cup[i] == 1)
			printf("%d\n", i);
	}
	return 0;
}