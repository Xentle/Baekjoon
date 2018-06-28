#include <stdio.h>

int main() {
	int n, a, b, sum=0, i=2;
	scanf("%d", &n);
	if(n==1)
		printf("1/1\n");
	else {
		while(1) {
			if(n<=(i*(i+1))/2 && n>((i-1)*i)/2) {
				sum=i+1;
				break;
			}
			else
				i++;
		}
		if(sum%2==0) {
			b=1+(n-1-((i-1)*i/2));
			a=sum-b;
		}
		else {
			a=1+(n-1-((i-1)*i/2));
			b=sum-a;
		}
	}
	printf("%d/%d\n", a, b);
	return 0;
}

//  1 4 1 8 1 12
// 1 2 6 7151628
// 3 5 8141727
// 4 9131826
//10121925
//112024
//2123
//22
