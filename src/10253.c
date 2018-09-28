#include <stdio.h>

int main() {
	int n, a, b, temp;
	scanf("%d", &n);
	getchar();
	for(int i=0; i<n; i++) {
		scanf("%d %d", &a, &b);
		getchar();
		while(a != 0) {
			if(b % a == 0) {
				temp = b / a;
				break;
			}
			else {
				temp = b / a + 1;
			}
			a = a * temp - b;
			b *= temp;
		}
		printf("%d\n", temp);
	}
	return 0;
}