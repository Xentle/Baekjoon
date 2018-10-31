#include <stdio.h>

int main() {
	int n, min=-1, index;
	for(int i=1; i<10; i++) {
		scanf("%d", &n);
		getchar();
		if(n > min) {
			min = n;
			index = i;
		}
	}
	printf("%d\n%d\n", min, index);
	return 0;
}