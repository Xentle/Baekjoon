#include <stdio.h>
#include <math.h>

int main() {
	int n, ans=3, t;
	scanf("%d", &n);
	if(n == 1)
		printf("1\n");
	else if(n == 2)
		printf("2\n");
	else if(n == 3)
		printf("3\n");
	else {
		for(int i=4; i<=n; i++) {
			t = sqrt(i);
			for(int j=1; j<=t; j++)
				if(i % j == 0)
					ans++;
		}
		printf("%d\n", ans);
	}
	return 0;
}