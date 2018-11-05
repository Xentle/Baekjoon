#include <stdio.h>

int main() {
	printf("n e\n");
	printf("- -----------\n");
	printf("0 1\n");
	printf("1 2\n");
	printf("2 2.5\n");
	for(int i=3; i<=9; i++) {
		double up=1, down=1;
		for(int j=1; j<=i; j++)
			down *= j;
		for(int j=i; j>=1; j--) {
			int temp = 1;
			for(int k=i; k>=j; k--)
				temp *= k;
			up += temp;
		}
		printf("%d %.9f\n", i, up/down);
	}
	return 0;
}