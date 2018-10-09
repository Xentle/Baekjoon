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
	if(a < b)
		printf("%lld\n%lld\n", a, a_origin * b_origin / a);
	else
		printf("%lld\n%lld\n", b, a_origin * b_origin / b);
	return 0;
}