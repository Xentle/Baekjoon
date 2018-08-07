#include <stdio.h>

int main() {
	int n, ans=1;
	scanf("%d", &n);
	getchar();
	if(n == 0)
		printf("1\n");
	else {
		for(int i=1; i<=n; i++)
			ans *= i;
		printf("%d\n", ans);
	}
	return 0;
}