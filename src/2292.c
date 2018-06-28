#include <stdio.h>

int main() {
	int n, i=0, j=1;
	scanf("%d", &n);
	if(n==1)
		printf("%d\n", 1);
	else {
		n-=1;
		while(1) {
			if(n>6*i && n<=6*(i+j)) {
				n=(j+1);
				break;
			}
			else {
				i+=j;
				j++;
			}
		}
		printf("%d\n", n);
	}
	return 0;
}
//1-1 (2,7)-2 (8,19)-3 (20,37)-4
//     (0,6]   (6,18]   (18,36]