#include <stdio.h>

int main() {
	int n[10]={0}, a, b, c, x;
	scanf("%d\n%d\n%d", &a, &b, &c);
	x=a*b*c;
	while(x>0) {
		n[x%10]++;
		x=x/10;
	}
	for(int i=0; i<10; i++)
		printf("%d\n", n[i]);
	return 0;
}