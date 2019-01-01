#include <stdio.h>

int main() {
	int T, n, c, t1;
	float g, t2;
	scanf("%d", &T);
	getchar();
	for(int i=0; i<T; i++) {
		c = 0;
		g = 0;
		scanf("%d", &n);
		getchar();
		for(int j=0; j<n; j++) {
			scanf("%d", &t1);
			getchar();
			scanf("%f", &t2);
			c += t1;
			g += t1 * t2;
		}
		printf("%d %.1f\n", c, g/c);
	}
	return 0;
}