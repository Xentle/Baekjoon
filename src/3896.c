#include <stdio.h>

int main() {
	int num[1299710], rep, n, up, down;
	for(int i=1; i<=1299710; i++)
		num[i] = 1;
	num[1] = 0;
	for(int i=2; i<=1299710; i++)
		if(num[i] == 1)
			for(int j=i*2; j<=1299710; j += i)
				num[j] = 0;
	scanf("%d", &rep);
	getchar();
	for(int i=0; i<rep; i++) {
		scanf("%d", &n);
		getchar();
		if(num[n] == 1)
			printf("0\n");
		else {
			up = down = n;
			while(num[up] != 1)
				up++;
			while(num[down] != 1)
				down--;
			printf("%d\n", up-down);
		}
	}
	return 0;
}