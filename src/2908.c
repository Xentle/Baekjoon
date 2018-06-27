#include <stdio.h>

int main() {
	int A, B, a[3], b[3];
	void p(int c[3]);
	scanf("%d %d", &A, &B);
	a[0]=A%10;
	a[1]=(A/10)%10;
	a[2]=A/100;
	b[0]=B%10;
	b[1]=(B/10)%10;
	b[2]=B/100;
	if(a[0]>b[0])
		p(a);
	else if(a[0]==b[0]) {
		if(a[1]>b[1])
			p(a);
		else if(a[1]==b[1]) {
			if(a[2]>b[2])
				p(a);
			else
				p(b);
		}
		else
			p(b);
	}
	else
		p(b);
	return 0;
}

void p(int c[3]) {
	printf("%d%d%d\n", c[0], c[1], c[2]);
}