#include <stdio.h>

int main() {
	int n, h, w, c, x, y;
	scanf("%d", &c);
	getchar();
	for(int i=0; i<c; i++) {
		scanf("%d %d %d", &h, &w, &n);
		getchar();
		x=n%h;
		if(x==0) {
			x=h;
			y=n/h;
		}
		else
			y=n/h+1;
		printf("%d", x);
		if(y<10)
			printf("0%d\n", y);
		else
			printf("%d\n", y);
	}
	return 0;
}