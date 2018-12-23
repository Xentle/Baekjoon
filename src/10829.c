#include <stdio.h>

int main() {
	int s[500], l=0;
	long long int n;
	scanf("%lld", &n);
	while(n > 0) {
		if(n % 2 == 0)
			s[l++] = 0;
		else
			s[l++] = 1;
		n /= 2;
	}
	l--;
	for(int i=l; i>=0; i--)
		printf("%d", s[i]);
	printf("\n");
	return 0;
}