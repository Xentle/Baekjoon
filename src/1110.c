#include <stdio.h>

int main() {
	int a,b,a1,b1,a2,b2,n;
	scanf("%d", &n);
	a=n/10;
	b=n%10;
	n=0;
	a1=a, b1=b;
	getchar();
	while(1) {
		b2=(a1+b1)%10;
		n++;
		if(b1==a && b2==b)
			break;
		a1=b1;
		b1=b2;
	}
	printf("%d\n", n);
	return 0;
}