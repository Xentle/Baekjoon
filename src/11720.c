#include <stdio.h>

int main() {
	int n;
	int i=0;
	scanf("%d", &n);
	getchar();
	for(int j=0; j<n; j++) {
		i+=(getchar()-48);
	}
	printf("%d\n",i);
	return 0;
}