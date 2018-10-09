#include <stdio.h>

int main() {
	long long int a_origin, b_origin, a, b;
	scanf("%lld %lld", &a_origin, &b_origin);
	getchar();
	a = a_origin;
	b = b_origin;
	while(1) {
		if(a % b == 0 || b % a == 0)
			break;
		if(a > b)
			a = a % b;
		else
			b = b % a;
	}
	if(a < b) {
		for(int i=0; i<a; i++)
			printf("1");
		printf("\n");
	}
	else {
		for(int i=0; i<b; i++)
			printf("1");
		printf("\n");
	}
	return 0;
}