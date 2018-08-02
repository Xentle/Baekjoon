#include <stdio.h>

int main() {
	long long int n;
	int q=15, f1=0, f2=1, temp;
	for(int i=0; i<5; i++)
		q *= 10;
	scanf("%lld", &n);
	getchar();
	n = n%q;
	if(n == 0)
		printf("0\n");
	else if(n == 1)
		printf("1\n");
	else {
		for(int i=2; i<=n; i++) {
			temp = f2;
			f2 += f1;
			f2 = f2 % 1000000;
			f1 = temp;
		}
		printf("%d\n", f2);
	}
	return 0;
}