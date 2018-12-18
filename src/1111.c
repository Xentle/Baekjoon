#include <stdio.h>

int main() {
	int a, b, n , arr[51], t, c, y1, y2, x1, x2;
	scanf("%d", &n);
	getchar();
	for(int i=1; i<=n; i++) {
		scanf("%d", &arr[i]);
		getchar();
	}
	if(n == 1)
		printf("A\n");
	else if(n == 2) {
		if(arr[1] == arr[2])
			printf("%d\n", arr[1]);
		else
			printf("A\n");
	}
	else {
		c = 1;
		if(arr[2] == arr[3]) {
			for(int i=4; i<=n; i++)
				if(arr[i] != arr[2]) {
					c = 0;
					break;
				}
			if(c == 1)
				printf("%d\n", arr[3]);
			else
				printf("B\n");
		}
		else {
			if(arr[1] == arr[2])
				printf("B\n");
			else if((arr[3] - arr[2]) % (arr[2] - arr[1]) != 0)
				printf("B\n");
			else {
				a = (arr[3] - arr[2]) / (arr[2] - arr[1]);
				b = arr[2] - a * arr[1];
				for(int i=2; i<n; i++)
					if(arr[i+1] != arr[i] * a + b) {
						c = 0;
						break;
					}
				if(c == 1)
					printf("%d\n", arr[n] * a + b);
				else
					printf("B\n");
			}
		}
	}
	return 0;
}