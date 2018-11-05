#include <stdio.h>

int main() {
	for(int i=2; i<=100; i++) {
		for(int a=2; a<i; a++) {
			for(int b=a; b<i; b++) {
				for(int c=b; c<i; c++) {
					if(i*i*i == a*a*a + b*b*b + c*c*c)
						printf("Cube = %d, Triple = (%d,%d,%d)\n", i, a, b, c);
				}
			}
		}
	}
	return 0;
}