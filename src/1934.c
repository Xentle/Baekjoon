#include <stdio.h>

int main() {
	int n, a_origin, b_origin, a, b;
	scanf("%d", &n);
	getchar();
	for(int i=0; i<n; i++) {
		scanf("%d %d", &a_origin, &b_origin);
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
		if(a < b)
			printf("%d\n", a_origin * b_origin / a);
		else
			printf("%d\n", a_origin * b_origin / b);
	}
	return 0;
}