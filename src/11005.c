#include <stdio.h>

int main() {
	char s[500], l=0;
	int n, b, t;
	scanf("%d %d", &n, &b);
	while(n > 0) {
		t = n % b;
		if(t >= 0 && t <= 9)
			s[l++] = t + '0';
		else
			s[l++] = t + 'A' - 10;
		n /= b;
	}
	l--;
	for(int i=l; i>=0; i--)
		printf("%c", s[i]);
	printf("\n");
	return 0;
}