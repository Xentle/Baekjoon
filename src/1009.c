#include <stdio.h>

int main() {
	int T, a, b;
	scanf("%d", &T);
	getchar();
	for(int i=0; i<T; i++) {
		scanf("%d %d", &a, &b);
		getchar();
		if(a % 10 == 1)
			printf("1\n");
		else if(a % 10 == 2) {
			if(b % 4 == 1)
				printf("2\n");
			else if(b % 4 == 2)
				printf("4\n");
			else if(b % 4 == 3)
				printf("8\n");
			else
				printf("6\n");
		}
		else if(a % 10 == 3) {
			if(b % 4 == 1)
				printf("3\n");
			else if(b % 4 == 2)
				printf("9\n");
			else if(b % 4 == 3)
				printf("7\n");
			else
				printf("1\n");
		}
		else if(a % 10 == 4) {
			if(b % 2 == 1)
				printf("4\n");
			else
				printf("6\n");
		}
		else if(a % 10 == 5) {
			printf("5\n");
		}
		else if(a % 10 == 6) {
			printf("6\n");
		}
		else if(a % 10 == 7) {
			if(b % 4 == 1)
				printf("7\n");
			else if(b % 4 == 2)
				printf("9\n");
			else if(b % 4 == 3)
				printf("3\n");
			else
				printf("1\n");
		}
		else if(a % 10 == 8) {
			if(b % 4 == 1)
				printf("8\n");
			else if(b % 4 == 2)
				printf("4\n");
			else if(b % 4 == 3)
				printf("2\n");
			else
				printf("6\n");
		}
		else if(a % 10 == 9) {
			if(b % 2 == 1)
				printf("9\n");
			else
				printf("1\n");
		}
		else if(a % 10 == 0)
			printf("10\n");
	}
	return 0;
}