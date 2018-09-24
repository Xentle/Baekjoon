#include <stdio.h>

int main() {
	int n, a, b, temp, ans=1;
	scanf("%d %d %d", &n, &a, &b);
	getchar();
	if(a > b) {
		temp = b;
		b = a;
		a = temp;
	}
	while(a % 2 != 1 || b > a + 1) {
		if(b % 2 == 1)
			b = b / 2 + 1;
		else
			b /= 2;
		if(a % 2 == 1)
			a = a / 2 + 1;
		else
			a /= 2;
		ans++;
	}
	printf("%d\n", ans);
	return 0;
}