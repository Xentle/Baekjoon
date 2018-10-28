#include <stdio.h>

int main() {
	int num[1000001], n, check;
	for(int i=1; i<=1000001; i++)
		num[i] = 1;
	num[1] = 0;
	for(int i=2; i<=1000001; i++)
		if(num[i] == 1)
			for(int j=i*2; j<=1000001; j += i)
				num[j] = 0;
	while(1) {
		check = 0;
		scanf("%d", &n);
		getchar();
		if(n == 0)
			break;
		for(int i=3; i<=n/2; i++) {
			if(num[i] == 1 && num[n-i] == 1) {
				printf("%d = %d + %d\n", n, i, n-i);
				check = 1;
				break;
			}
		}
		if(check == 0)
				printf("Goldbach's conjecture is wrong.\n");
	}
	return 0;
}