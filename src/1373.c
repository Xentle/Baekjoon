#include <stdio.h>

int main() {
	char c;
	int two[1000000], l=0, i=0, eight[1000000];
	while((c = getchar()) != '\n')
		two[l++] = c - '0';
	l--;
	while(l >= 0) {
		if(l > 1) {
			eight[i++] = two[l] + 2*two[l-1] + 4*two[l-2];
			l -= 3;
		}
		else if(l == 1) {
			eight[i++] = two[l] + 2*two[l-1];
			l -= 3;
		}
		else if (l == 0) {
			eight[i++] = two[l];
			l -= 3;
		}
	}
	for(int j=i-1; j>=0; j--)
			printf("%d", eight[j]);
	printf("\n");
	return 0;
}