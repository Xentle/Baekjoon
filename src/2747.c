#include <stdio.h>

int main() {
	int f1=0, f2=1, n, temp;
	scanf("%d", &n);
	getchar();
	if(n == 0)
		printf("0\n");
	else if(n == 1)
		printf("1\n");
	else {
		for(int i=2; i<=n; i++) {
			temp = f2;
			f2 = f2+f1;
			f1 = temp;
		}
		printf("%d\n", f2);
	}
	return 0;
}