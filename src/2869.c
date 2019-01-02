#include <stdio.h>

int main() {
	int a, b, c, ans;
	scanf("%d %d %d", &a, &b, &c);
	ans = (c-a)/(a-b);
	if((c-a) % (a-b) == 0)
		printf("%d\n", ans+1);
	else
		printf("%d\n", ans+2);
	return 0;
}