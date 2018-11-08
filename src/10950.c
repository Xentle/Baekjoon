#include <stdio.h>

int main() {
	int T, A, B;
	scanf("%d", &T);
	getchar();
	for(int i=1; i<=T; i++) {
		scanf("%d %d", &A, &B);
		getchar();
		printf("%d\n", A+B);
	}
	return 0;
}